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
from my_intermediate_interfaces.msg import VertexConstraint, EdgeConstraint, AgentPath
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from nav_msgs.srv import GetMap
from my_intermediate.cbs.cbs_node import CBS
from my_intermediate.cbs.state import State
from my_intermediate.cbs.location import Location
from my_intermediate.cbs.discrete_location import DiscreteLocation
from copy import deepcopy
from my_intermediate_interfaces.msg import AgentPathRequest
import math


class CollisionAvoiderNode(Node):
    def __init__(self):
        super().__init__("collision_avoider")
        self.declare_parameter("pixel_per_cell", 4)
        self.get_logger().info("Collision Avoider has been started!")

        client_cb_group = MutuallyExclusiveCallbackGroup()
        client_cb_group_map = MutuallyExclusiveCallbackGroup()
        client_cb_group_cl = MutuallyExclusiveCallbackGroup()

        self.map_client = self.create_client(
            GetMap, "map_server/map", callback_group=client_cb_group_map)
        while not self.map_client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /map_server/map...")

        self.pixel_per_cell = self.get_parameter("pixel_per_cell").value
        self.original_map = None
        self.discrete_map = self.get_map()

        self.server_ = self.create_service(
            StartGoalPositions, "cbs_plans", self.callback_cbs_plan, callback_group=client_cb_group) 

        self.client_ = self.create_client(
            StartGoalPoseStamped, "get_plans", callback_group=client_cb_group_cl)
        while not self.client_.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /get_plans...")      

    async def callback_cbs_plan(self, request, response):

        ps_requests = self.convert_to_pose_stamped(request.requests)

        requests = []
        agents = {}
        for i in range(len(ps_requests)):
            agent_path_request = self.get_request_message("tb"+str(i+1), ps_requests[i]['start'], ps_requests[i]['goal'])
            requests.append(agent_path_request)
            agents.update({agent_path_request.name: {'start': agent_path_request.start, 'goal': agent_path_request.goal}})

        client_request = StartGoalPoseStamped.Request()
        client_request.requests = requests

        self.get_logger().info("Asking for plans...")
        future = self.client_.call_async(client_request)
        await future
        service_response = future.result()
        response.plans = service_response.plans  # Piani dei vari agenti

        #response.plans -> [AgentPath, AgentPath]
        #AgentPath -> name, path        
        solution = await self.cbs_alg(self.convert_plans(response.plans), self.discretize_plans(response.plans), agents)        

        final_plans = []
        for s in response.plans:
            final_plan = AgentPath()
            final_plan.name = s.name
            #if(s.name == "tb2"):
            #    self.get_logger().info(str(solution[s.name]))
            final_plan.path.header = s.path.header
            final_plan.path.poses = solution[s.name]
            final_plans.append(final_plan)

        response.plans = final_plans

        self.get_logger().info("Sending response")

        return response
    
    async def cbs_alg(self, plans, discrete_plans, agents):

        cbs = CBS(agents)

        #First solution computation, we already have it, so it is simply a conversion in the desired format
        start = cbs.get_starting_node(plans, discrete_plans)
        cbs.open_set |= {start}
        
        #CBS
        while cbs.open_set:
            P = min(cbs.open_set)
            cbs.open_set -= {P}
            cbs.closed_set |= {P}
            conflict_dict = cbs.env.get_first_conflict(P.solution)

            if not conflict_dict:
                self.get_logger().info("solution found, no conflicts!")
                return cbs.generate_plan(P.solution)

            constraint_dict = cbs.env.create_constraints_from_conflict(conflict_dict)

            self.get_logger().info("Conflicts found")
            for a in cbs.env.agent_dict.keys():
                self.get_logger().info(str(constraint_dict[a]))

            for agent in constraint_dict.keys():
                new_node = deepcopy(P)
                new_node.constraint_dict[agent].add_constraint(constraint_dict[agent])
                
                vc, ec = self.get_constraints(new_node.constraint_dict[agent], agent, start)

                msg = self.get_request_message(agent, agents[agent]['start'], agents[agent]['goal'], vc, ec)

                client_request = StartGoalPoseStamped.Request()
                client_request.requests = [msg]

                self.get_logger().info("Asking for a plan...")
                future = self.client_.call_async(client_request)
                await future
                service_response = future.result()
                new_plan = service_response.plans # Piani dei vari agenti
                self.get_logger().info("New plan computed")

                new_node.solution.update({agent: self.convert_plans(new_plan)[0]['path']})
                new_node.discrete_solution.update({agent: self.discretize_plans(new_plan)[0]['path']})
                
                new_node.cost = cbs.env.compute_solution_cost(new_node.discrete_solution)

                # TODO: ending condition
                if new_node not in cbs.closed_set:
                    cbs.open_set |= {new_node}

        return {}


    def callback_call_get_plans(self, future):
        try:
            response = future.result()
            self.get_logger().info("Got Plans: " + str(len(response)))

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def get_request_message(self, name, start, goal, vc = [], ec = []):
        msg = AgentPathRequest()
        msg.name = name
        msg.start = start
        msg.goal = goal
        msg.vertex_constraints = vc
        msg.edge_constraints = ec
        return msg
    
    def get_constraints(self, constraints, agent, start):

        vc = []
        for vertex_constr in constraints.vertex_constraints:
            vc_tmp = VertexConstraint()
            vc_tmp.cell.pose.position.x = start.solution[agent][vertex_constr.time].location.pose_stamped.pose.position.x
            vc_tmp.cell.pose.position.y = start.solution[agent][vertex_constr.time].location.pose_stamped.pose.position.y
            vc_tmp.time_step = vertex_constr.time
            vc.append(vc_tmp)

        ec = []
        for edge_constr in constraints.edge_constraints:
            ec_tmp = EdgeConstraint()
            ec_tmp.cell_from.pose.position.x = start.solution[agent][edge_constr.time].location.pose_stamped.pose.position.x
            ec_tmp.cell_from.pose.position.y = start.solution[agent][edge_constr.time].location.pose_stamped.pose.position.y
            ec_tmp.cell_to.pose.position.x = start.solution[agent][edge_constr.time+1].location.pose_stamped.pose.position.x
            ec_tmp.cell_to.pose.position.y = start.solution[agent][edge_constr.time+1].location.pose_stamped.pose.position.y
            ec_tmp.time_step = edge_constr.time
            ec.append(ec_tmp)

        return vc, ec

    def convert_to_pose_stamped(self, objs):
        pose_stamped = []
        for ob in objs:
            pose_stamped.append({"start":self.from_object_to_PoseStamped(ob.start), "goal": self.from_object_to_PoseStamped(ob.goal)})
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
        pose.position.x = obj.x
        pose.position.y = obj.y
        pose.position.z = obj.z

        pose_stamped.header = header
        pose_stamped.pose = pose

        return pose_stamped

    def get_map(self):
        client_request = GetMap.Request()

        future = self.map_client.call_async(client_request)
        # future.add_done_callback(self.callback_call_get_plans)
        self.wait_future(future)
        #await future

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
            for i, pose in enumerate(p.path.poses):
                discrete_x = math.floor(
                    round((pose.pose.position.x - self.map_origin.x) / self.map_resolution) / self.pixel_per_cell)
                discrete_y = math.floor(
                    round((pose.pose.position.y - self.map_origin.y) / self.map_resolution) / self.pixel_per_cell)
                
                discrete_path.append(State(i , DiscreteLocation(discrete_x, discrete_y)))
            
            discrete_plans.append({'name': p.name, 'path': discrete_path})

        return discrete_plans
    
    def convert_plans(self, plans):
        converted_plans = []
        for p in plans:
            converted_path = []
            # p is of type nav_msg/Path
            for i, pose in enumerate(p.path.poses):                
                converted_path.append(State(i , Location(pose)))
            
            converted_plans.append({'name': p.name, 'path': converted_path})

        return converted_plans
    
    def wait_future(self, future):
        rclpy.spin_until_future_complete(self, future)


def main(args=None):
    rclpy.init(args=args)
    node = CollisionAvoiderNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()
