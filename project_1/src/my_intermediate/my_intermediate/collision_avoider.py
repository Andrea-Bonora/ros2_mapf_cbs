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
        self.get_logger().info("Collision Avoider has been started!")

        client_cb_group = MutuallyExclusiveCallbackGroup()
        client_cb_group_map = MutuallyExclusiveCallbackGroup()
        client_cb_group_cl = MutuallyExclusiveCallbackGroup()

        self.map_client = self.create_client(
            GetMap, "map_server/map", callback_group=client_cb_group_map)
        while not self.map_client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /map_server/map...")

        self.nx = 0
        self.ny = 0
        self.get_map()

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
        
        solution = await self.cbs_alg(self.convert_plans(response.plans), agents)

        #solution = await self.icbs_alg(self.convert_plans(response.plans), agents)
                
        final_plans = response.plans
        
        final_plans = []
        if not solution == {}:
            for s in response.plans:
                final_plan = AgentPath()
                final_plan.name = s.name
                final_plan.path.header = s.path.header
                final_plan.path.poses = solution[s.name]
                final_plans.append(final_plan)
        
        response.plans = final_plans

        self.get_logger().info("Sending response")
        
        return response
    
    async def cbs_alg(self, plans, agents):

        cbs = CBS(agents, self.nx, self.ny, self.origin, self.map_resolution)

        #First solution computation, we already have it, so it is simply a conversion in the desired format
        start = cbs.get_starting_node(plans)
        cbs.open_set |= {start}
        
        while cbs.open_set:
            P = min(cbs.open_set)
            cbs.open_set -= {P}
            cbs.closed_set |= {P}
            
            conflict_dict = cbs.env.get_first_c_conflict(P.solution)

            if not conflict_dict:
                self.get_logger().info("solution found, no conflicts!")
                return cbs.generate_plan(P.solution)
                
            constraint_dict = cbs.env.create_constraints_from_conflict(conflict_dict)
            
            for agent in constraint_dict.keys():
                if conflict_dict.time_1 < len(P.solution[agent]):
                    new_node = deepcopy(P)
                    new_node.constraint_dict[agent].add_constraint(constraint_dict[agent])

                    vc, ec = self.get_constraints(new_node.constraint_dict[agent])

                    new_plan = await self.get_plan(agent, agents[agent]['start'], agents[agent]['goal'], vc, ec)
                    if not len(new_plan[0].path.poses) == 0:
                        new_node.solution.update({agent: self.convert_plans(new_plan)[0]['path']})
                        new_node.cost = cbs.env.compute_solution_cost(new_node.solution)
                        
                        are_equals = self.are_equals(P.solution[agent], new_node.solution[agent])
                        if are_equals:
                            break
                        if new_node != {} and new_node not in cbs.closed_set:
                            cbs.open_set |= {new_node}

            if are_equals:
                break
            
        self.get_logger().info("OUT OF THE WHILE")
        return {}
    
    async def icbs_alg(self, plans, agents):
        cbs = CBS(agents, self.nx, self.ny, self.origin, self.map_resolution)

        #First solution computation, we already have it, so it is simply a conversion in the desired format
        start = cbs.get_starting_node(plans)
        cbs.open_set |= {start}
    
        while cbs.open_set:
            P = min(cbs.open_set)
            cbs.open_set -= {P}
            
            conflict_dict = cbs.env.get_all_conflicts(P.solution)
            NC = len(conflict_dict)
            if not conflict_dict or conflict_dict == []:
                self.get_logger().info("solution found, no conflicts!")
                return cbs.generate_plan(P.solution)
            self.get_logger().info("Number of conflicts: " + str(NC))
                
            first_non_cardinal_conflict = first_semi_cardinal_conflict = None
            for conf in conflict_dict:
                constraint_dict = cbs.env.create_constraints_from_conflict(conf)
                cardinal_conflict = 0
                new_plans = {}
                for agent in constraint_dict.keys():
                    are_equals = False
                    cd = deepcopy(P.constraint_dict[agent])
                    cd.add_constraint(constraint_dict[agent])
                    vc, ec = self.get_constraints(cd)
                    new_plan = await self.get_plan(agent, agents[agent]['start'], agents[agent]['goal'], vc, ec)
                    if not len(new_plan[0].path.poses) == 0:
                        new_plans[agent] = new_plan
                        new_plan = self.convert_plans(new_plan)[0]['path']
                            
                        if self.are_equals(P.solution[agent], new_plan):
                            self.get_logger().info(str(conf))
                            are_equals = True
                            break
                        if len(new_plan) > len(P.solution[agent]):
                            cardinal_conflict += 1

                if are_equals:
                    break

                    
                if cardinal_conflict == 2:
                        
                    #SPLIT
                    cbs.closed_set |= {P}

                    new_node_1 = deepcopy(P)
                    new_node_2 = deepcopy(P)

                    agents_name = list(new_plans.keys())

                    new_node_1.solution.update({agents_name[0]: self.convert_plans(new_plans[agents_name[0]])[0]['path']})
                    new_node_1.cost = cbs.env.compute_solution_cost(new_node_1.solution)

                    new_node_2.solution.update({agents_name[1]: self.convert_plans(new_plans[agents_name[1]])[0]['path']})
                    new_node_2.cost = cbs.env.compute_solution_cost(new_node_2.solution)

                    if new_node_1 != {} and new_node_1 not in cbs.closed_set:
                        cbs.open_set |= {new_node_1}

                    if new_node_2 != {} and new_node_2 not in cbs.closed_set:
                        cbs.open_set |= {new_node_2}

                    break
                        
                elif cardinal_conflict == 1: #IT IS SEMI-CARDINAL
                    if first_semi_cardinal_conflict == None:
                            #self.get_logger().info("SEMI-CARDINAL")
                        agents_name = list(new_plans.keys())
                        tmp_solution = deepcopy(P.solution)
                        tmp_solution.update({agents_name[0]: self.convert_plans(new_plans[agents_name[0]])[0]['path']})
                        tmp_solution.update({agents_name[1]: self.convert_plans(new_plans[agents_name[1]])[0]['path']})
                        tmp_nc = len(cbs.env.get_all_conflicts(tmp_solution))
                          
                        if tmp_nc <= NC: #IS IT USEFUL?
                            first_semi_cardinal_conflict = new_plans

                elif first_non_cardinal_conflict == None:
                    agents_name = list(new_plans.keys())
                    tmp_solution = deepcopy(P.solution)
                    tmp_solution.update({agents_name[0]: self.convert_plans(new_plans[agents_name[0]])[0]['path']})
                    tmp_solution.update({agents_name[1]: self.convert_plans(new_plans[agents_name[1]])[0]['path']})
                    tmp_nc = len(cbs.env.get_all_conflicts(tmp_solution))
                    if tmp_nc <= NC: #IS IT USEFUL?
                        first_non_cardinal_conflict = new_plans

            if are_equals:
                break

            if cardinal_conflict == 2:
                pass

            if first_semi_cardinal_conflict != None:
                agents_name = list(first_semi_cardinal_conflict.keys())
                P.solution.update({agents_name[0]: self.convert_plans(new_plans[agents_name[0]])[0]['path']})
                P.solution.update({agents_name[1]: self.convert_plans(new_plans[agents_name[1]])[0]['path']})
                P.cost = cbs.env.compute_solution_cost(P.solution)
                cbs.open_set |= {P}
                 
            elif first_non_cardinal_conflict != None:
                agents_name = list(first_non_cardinal_conflict.keys())
                P.solution.update({agents_name[0]: self.convert_plans(new_plans[agents_name[0]])[0]['path']})
                P.solution.update({agents_name[1]: self.convert_plans(new_plans[agents_name[1]])[0]['path']})
                P.cost = cbs.env.compute_solution_cost(P.solution)
                cbs.open_set |= {P}
            
        self.get_logger().info("OUT OF THE WHILE")
        return {}
    
    async def get_plan(self, agent, start, end, vc = [], ec = []):
        msg = self.get_request_message(agent, start, end, vc, ec)
        client_request = StartGoalPoseStamped.Request()
        client_request.requests = [msg]
        future = self.client_.call_async(client_request)
        await future
        service_response = future.result()
        return service_response.plans # Piani dei vari agenti

    def are_equals(self, p1, p2):
        if p2 == {}:
            return False
        
        if len(p1) != len(p2):
            return False
        
        for a1, a2 in zip(p1, p2):
            if a1 != a2:
                return False
                  
        for m in p1:
            tmp_x = int((m.location.pose_stamped.pose.position.x - self.origin['x'] ) / self.map_resolution)
            tmp_y = int((m.location.pose_stamped.pose.position.y - self.origin['y'] ) / self.map_resolution)
            self.get_logger().info(str(m.time) + " (" + str(round(tmp_y*self.nx + tmp_x)) + ")")
        self.get_logger().info(" --- ")
        for m in p2:
            tmp_x = int((m.location.pose_stamped.pose.position.x + 10 ) / 0.05)
            tmp_y = int((m.location.pose_stamped.pose.position.y + 10 ) / 0.05)
            self.get_logger().info(str(m.time) + " (" + str(round(tmp_y*self.nx + tmp_x)) + ")")
        return True

    def get_request_message(self, name, start, goal, vc = [], ec = []):
        msg = AgentPathRequest()
        msg.name = name
        msg.start = start
        msg.goal = goal
        msg.vertex_constraints = vc
        msg.edge_constraints = ec
        return msg
    
    def get_constraints(self, constraints):

        vc = []
        for vertex_constr in constraints.vertex_constraints:
            vc_tmp = VertexConstraint()
            vc_tmp.cell_index = vertex_constr.index
            vc_tmp.time_step = vertex_constr.time
            vc.append(vc_tmp)

        ec = []
        for edge_constr in constraints.edge_constraints:
            ec_tmp = EdgeConstraint()
            ec_tmp.cell_from_index = edge_constr.from_index
            ec_tmp.cell_to_index = edge_constr.to_index
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
        self.wait_future(future)

        result = future.result().map
        self.original_map = result
        self.map_resolution = result.info.resolution
        self.nx = result.info.width
        self.ny = result.info.height
        self.origin = {"x": result.info.origin.position.x, "y": result.info.origin.position.y, "z": result.info.origin.position.z}

        self.get_logger().info("Resolution: " + str(self.map_resolution))
        self.get_logger().info("Height: " + str(self.nx))
        self.get_logger().info("Width: " + str(self.ny))
        self.get_logger().info("N_Values: " + str(self.nx * self.ny))
        self.get_logger().info("Origin: (" + str(result.info.origin.position.x) +
                               ", " + str(result.info.origin.position.y) + ", " + str(result.info.origin.position.z) + " )")
    
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
