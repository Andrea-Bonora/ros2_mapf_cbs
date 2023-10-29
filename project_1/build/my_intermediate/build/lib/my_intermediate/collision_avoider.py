#This node is responsable for handling the cbs algorithm. He ask to the multi_agent_plan_asker 
#for the plans of the agents, and then it run a collision checker to see if the plans are compatible.
#If any conflict is found then it starts the cbs algorithm to find paths with no collision.


#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

import numpy as np
from geometry_msgs.msg import Pose, PoseStamped, Point
from builtin_interfaces.msg import Time
from std_msgs.msg import Header
from my_intermediate_interfaces.srv import StartGoalPositions, StartGoalPoseStamped
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from nav_msgs.srv import GetMap
from my_intermediate.cbs.cbs_node import CBS
from my_intermediate.cbs.environment import Environment
from my_intermediate.cbs.state import State
from my_intermediate.cbs.location import Location
from my_intermediate.cbs.high_level_node import HighLevelNode
from my_intermediate.cbs.constraint import Constraints
from my_intermediate.cbs.map_creator import MapCreator
from copy import deepcopy
from my_intermediate_interfaces.msg import AgentPathRequest
import math


class CollisionAvoiderNode(Node):
    def __init__(self):
        super().__init__("collision_avoider")
        self.get_logger().info("Collision Avoider has been started!")
        client_cb_group = MutuallyExclusiveCallbackGroup()
        client_cb_group_map = MutuallyExclusiveCallbackGroup()

        self.map_client = self.create_client(
            GetMap, "map_server/map", callback_group=client_cb_group_map)

        while not self.map_client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /map_server/map...")

        self.pixel_per_cell = 4 #DEFINIRE UN PARAMETRO
        self.original_map = None
        self.discrete_map = self.get_map()

        self.server_ = self.create_service(
            StartGoalPositions, "cbs_plans", self.callback_cbs_plan, callback_group=client_cb_group)

        client_cb_group_cl = MutuallyExclusiveCallbackGroup()
        self.client_ = self.create_client(
            StartGoalPoseStamped, "get_plans", callback_group=client_cb_group_cl)
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /get_plans...")

    def callback_cbs_plan(self, request, response):

        starting_positions = self.convert_to_pose_stamped(self.compose_objects(
            request.start_x, request.start_y, request.start_z))

        ending_positions = self.convert_to_pose_stamped(self.compose_objects(
            request.end_x, request.end_y, request.end_z))

        client_request = StartGoalPoseStamped.Request()

        requests = []
        for i in range(len(starting_positions)):
            agent_path_request = AgentPathRequest()
            agent_path_request.name = "tb"+str(i+1)
            agent_path_request.start = starting_positions[i]
            agent_path_request.goal = ending_positions[i]
            agent_path_request.vertex_constraints = []
            agent_path_request.edge_constraints = [] 
            requests.append(agent_path_request)

        client_request.requests = requests

        self.get_logger().info("Asking for plans...")
        future = self.client_.call_async(client_request)
        # future.add_done_callback(self.callback_call_get_plans)

        rclpy.spin_until_future_complete(self, future)

        service_response = future.result()
        response.plans = service_response.plans  # Piani dei vari agenti

        #response.plans -> [AgentPath, AgentPath]

        #plans = self.discretize_plans(response.plans) #Need to work on it
        #self.get_logger().info(str(len(plans)))
        #self.get_logger().info(str(plans[0]))
        # CBS MAIN PART

        #self.get_logger().info(str(type(plans[0])))

        '''
        solution = self.cbs_alg(plans)        
        
        if not solution:
            self.get_logger().info(" Solution not found")

        else:
            for a in solution:
                self.get_logger().info("Lunghezza piano per " +
                                       str(a) + ": " + str(len(solution[a])))
        '''       
        self.get_logger().info("Sending response")

        return response
    
    def cbs_alg(self, plans):

        env = Environment([],[],[])#(dimension, agents, obstacles)
        cbs = CBS(env)
        map_creator = MapCreator("/home/andrea/tesi/ros2_mapf_cbs/maps/")

        #First solution computed, we already have it, so it is simply a conversion in the desired format
        start = HighLevelNode()
        start.constraint_dict = {}
        for agent in self.env.agent_dict.keys():
           start.constraint_dict[agent] = Constraints()
        start.solution = self.env.compute_solution(plans)
        if not start.solution:
            return {}
        start.cost = self.env.compute_solution_cost(start.solution)

        cbs.open_set |= {start}
        #CBS
        while cbs.open_set:
            P, conflict_dict = cbs.update_constraints_dict()
            if not conflict_dict:
                print("solution found")
                return cbs.generate_plan(P.solution)

            constraint_dict = self.env.create_constraints_from_conflict(conflict_dict)

            for agent in constraint_dict.keys():
                new_node = deepcopy(P)
                new_node.constraint_dict[agent].add_constraint(constraint_dict[agent])
                map_creator.create_map(self.original_map)

                #ELABORA SOLUZIONE CON TENENDO CONTO DEI CONSTRAINTS
                #ASK SOLUTION
                self.env.constraint_dict = new_node.constraint_dict
                new_node.solution = self.env.compute_solution()
                if not new_node.solution:
                    continue
                new_node.cost = self.env.compute_solution_cost(new_node.solution)

                # TODO: ending condition
                if new_node not in self.closed_set:
                    self.open_set |= {new_node}


        self.get_logger().info("Start searching...")
        solution = cbs.search(plans)

        return solution


    def callback_call_get_plans(self, future):
        try:
            response = future.result()
            self.get_logger().info("Got Plans: " + str(len(response)))

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def compose_objects(self, x, y, z):
        objs = []
        if len(x) == len(y) and len(x) == len(z):
            for i in range(len(x)):
                objs.append({'x': x[i], 'y': y[i], 'z': z[i]})
        return objs

    def convert_to_pose_stamped(self, objs):
        pose_stamped = []
        for ob in objs:
            pose_stamped.append(self.from_object_to_PoseStamped(ob))
        return pose_stamped

    def from_object_to_PoseStamped(self, obj):
        pose_stamped = PoseStamped()
        header = Header()

        header.stamp = Time()
        header.stamp.sec = 0
        header.stamp.nanosec = 0
        header.frame_id = 'map'

        pose = Pose()
        pose.position = Point()
        pose.position.x = obj['x']
        pose.position.y = obj['y']
        pose.position.z = obj['z']

        pose_stamped.header = header
        pose_stamped.pose = pose

        return pose_stamped

    def get_map(self):
        client_request = GetMap.Request()

        future = self.map_client.call_async(client_request)
        # future.add_done_callback(self.callback_call_get_plans)
        self.wait_future(future)

        result = future.result().map
        self.original_map = result
        self.map_resolution = result.info.resolution
        self.map_width = result.info.width
        self.map_height = result.info.height
        self.map_origin = result.info.origin.position
        self.map_values = result.data

        self.get_logger().info("Resolution: " + str(self.map_resolution))
        self.get_logger().info("Height: " + str(self.map_width))
        self.get_logger().info("Width: " + str(self.map_height))
        self.get_logger().info("N_Values: " + str(len(self.map_values)))
        self.get_logger().info("Origin: (" + str(result.info.origin.position.x) +
                               ", " + str(result.info.origin.position.y) + ", " + str(result.info.origin.position.z) + " )")

        n_rows = int(self.map_height / self.pixel_per_cell)
        n_cols = int(self.map_width / self.pixel_per_cell)

        discrete_whole_map = np.zeros((self.map_height, self.map_width))

        j = i = k = 0
        while i < len(self.map_values):
            discrete_whole_map[k][j] = self.map_values[i]
            j += 1
            i += 1
            if j != 0 and j % self.map_width == 0:
                j = 0
                k += 1

        discrete_map = np.zeros((n_rows, n_cols))
        k = z = 0
        obstacles = []

        for i in range(0, self.map_height, self.pixel_per_cell):
            for j in range(0, self.map_width, self.pixel_per_cell):
                tmp_values = discrete_whole_map[i:i +
                                                self.pixel_per_cell-1, j:j+self.pixel_per_cell-1]
                # self.get_logger().info(str(tmp_values))
                if -1 in tmp_values or 100 in tmp_values:
                    # if 0 in tmp_values:
                    discrete_map[k][z] = 1.0
                    obstacles.append((k, z))
                z += 1
            k += 1
            z = 0

        return discrete_map

    def discretize_plans(self, plans):
        discrete_plans = []
        for p in plans:
            discrete_path = []
            # p is of type nav_msg/Path
            for i, pose in enumerate(p.poses):
                discrete_x = math.floor(
                    round((pose.pose.position.x - self.map_origin.x) / self.map_resolution) / self.pixel_per_cell)
                discrete_y = math.floor(
                    round((pose.pose.position.y - self.map_origin.y) / self.map_resolution) / self.pixel_per_cell)
                
                discrete_path.append(State(i , Location(discrete_x, discrete_y)))
            
            discrete_plans.append(discrete_path)

        return discrete_plans
    
    def wait_future(self, future):
        rclpy.spin_until_future_complete(self, future)


def main(args=None):
    rclpy.init(args=args)
    node = CollisionAvoiderNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
