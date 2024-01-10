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
from cbs_interfaces.action import StartGoalPositions, StartGoalPoseStamped
from cbs_interfaces.msg import VertexConstraint, EdgeConstraint, AgentPath
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from nav_msgs.srv import GetMap
from cbs_nodes.cbs.cbs_node import CBS
from cbs_nodes.cbs.state import State
from cbs_nodes.cbs.location import Location
from cbs_nodes.cbs.discrete_location import DiscreteLocation
from copy import deepcopy
from cbs_interfaces.msg import AgentPathRequest
from nav2_msgs.action import SmoothPath
from nav2_msgs.srv import ClearEntireCostmap
from rclpy.action import ActionClient, ActionServer
import math


class CollisionAvoiderNode(Node):
    def __init__(self):
        super().__init__("collision_avoider")

        self.declare_parameter("algorithm", "cbs") #Define the algorithm to use [cbs, icbs]
        self.declare_parameter("num_agents", 2) #Define the number of robots in the experiment
        self.get_logger().info("Collision Avoider has been started!")

        client_cb_group = MutuallyExclusiveCallbackGroup() #CallbackGroup used for the ActionServer /cbs_plans
        client_cb_group_map = MutuallyExclusiveCallbackGroup() #CallbackGroup used for the Client /map
        client_cb_group_cl = MutuallyExclusiveCallbackGroup() #CallbackGroup used for the ActionClient /get_plans
        client_cb_group_cm = MutuallyExclusiveCallbackGroup() #CallbackGroup used for the Client /robotinobase<n>/global_costmap/clear_entirely_global_costmap

        #client used to collect information about the map. 
        #Each robot has its own map_server, this can be changed in order to have only one /map server since the map is equal for every robot
        self.map_client = self.create_client(
            GetMap, "/robotinobase1/map_server/map", callback_group=client_cb_group_map)
        
        while not self.map_client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /map_server/map...")

        self.algorithm = self.get_parameter("algorithm").value
        self.num_agents = self.get_parameter("num_agents").value
        self.nx = 0
        self.ny = 0
        self.get_map()
        #For statistics
        self.nodi_totali = 0
        self.nodi_espansi = 0
        self.conflitti_totali = 0
        
        self.clear_maps = []
        for i in range(self.num_agents):
            self.clear_maps.append(self.create_client(ClearEntireCostmap,
                                                      "robotinobase"+ str(i+1) +"/global_costmap/clear_entirely_global_costmap", 
                                                      callback_group=client_cb_group_cm))

        #/cbs_plans is an ActionServer that waits for a set of coordinates: a starting position and an ending position for each
        #robot. The coordinates will be processed from this node and the cbs algorithm will be performed in order to find
        #collision-free paths
        self.server_ = ActionServer(self,StartGoalPositions, "cbs_plans", self.callback_cbs_plan, callback_group=client_cb_group) 

        #/get_plans is an ActionClient that will send a set of coordinates, a starting position and an ending position for each
        #robot, and a set of constraints to satisfy. The Server will return a path for each robot.
        self.client_ = ActionClient(self, StartGoalPoseStamped, "get_plans", callback_group=client_cb_group_cl)
        while not self.client_.wait_for_server(1.0):
            self.get_logger().warn("Waiting for Server /get_plans...")      

    async def callback_cbs_plan(self, goal_handle):

        request = goal_handle.request
        feedback = StartGoalPositions.Feedback() #Not implemented yet
        response = StartGoalPositions.Result()

        #Before asking for the plans is crucial to clear the Costmap. In this way the position of the other robots won't be
        #considered and all the positions will be considered as reachable. 
        for ccl in self.clear_maps:
            msg = ClearEntireCostmap.Request()
            f = ccl.call_async(msg)
            await f

        ps_requests = self.convert_to_pose_stamped(request.requests) #Coordinates will be converted in pose_stamped

        requests = []
        agents = {}
        for i in range(len(ps_requests)):
            agent_path_request = self.get_request_message("robotinobase"+str(i+1), ps_requests[i]['start'], ps_requests[i]['goal'])
            requests.append(agent_path_request)
            #Set the start and goal position of each robot
            agents.update({agent_path_request.name: {'start': agent_path_request.start, 'goal': agent_path_request.goal}})

        client_request = StartGoalPoseStamped.Goal()
        client_request.requests = requests
        
        #As in the CBS algorithm, a first path need to be computed for each robot, not considering all the other agents.
        future = self.client_.send_goal_async(client_request)
        await future
        if not future.result().accepted:
            self.get_logger().info('Goal rejected :(')
            return
        
        get_result_future = future.result().get_result_async()
        await get_result_future

        service_response = get_result_future.result().result
        response.plans = service_response.plans  #Plans of the agents   
        
        if self.algorithm == "icbs":
            #Perform ICBS algorithm
            solution = await self.icbs_alg(self.convert_plans(response.plans), agents)
        else:
            #Perform CBS algorithm
            solution = await self.cbs_alg(self.convert_plans(response.plans), agents)
                
        final_plans = response.plans
        
        #Prepare the response of the /cbs_plans ActionServer
        final_plans = []
        if not solution == {}:
            for s in response.plans:
                final_plan = AgentPath()
                final_plan.name = s.name
                final_plan.path.header = s.path.header
                final_plan.path.poses = solution[s.name]
                final_plans.append(final_plan)
        
        response.plans = final_plans

        goal_handle.succeed()
        self.get_logger().info("Sending response")

        #Print statistics
        self.get_logger().info("Nodi espansi: " + str(self.nodi_espansi))
        self.get_logger().info("Nodi generati: " + str(self.nodi_totali))
        self.get_logger().info("Conflitti totali: " + str(self.conflitti_totali))
        
        return response
    
    async def cbs_alg(self, plans, agents):

        n_conflict_trovati = 0
        cbs = CBS(agents, self.nx, self.ny, self.origin, self.map_resolution)
        #First solution computation, we already have it, so it is simply a conversion in the desired format
        start = cbs.get_starting_node(plans)
        cbs.open_set |= {start} #Set the open_set with the start node.
        
        while cbs.open_set: #Go on until the are nodes in the open_set
            #Get the node with the minimum solution cost, remove it from the open_set and put it in the closed_set
            P = min(cbs.open_set) 
            cbs.open_set -= {P}
            cbs.closed_set |= {P}
            
            conflict_dict = cbs.env.get_first_c_conflict(P.solution) #Get first conflict in the set of paths

            if not conflict_dict: #No conflicts found! We have collision-free paths
                for agent in agents:
                    #Computed the smoothed version of the paths
                    vc, ec = self.get_constraints(P.constraint_dict[agent])
                    new_plan = await self.get_plan(agent, agents[agent]['start'], agents[agent]['goal'], vc, ec, True)
                    P.solution.update({agent: self.convert_plans(new_plan)[0]['path']})
                
                #Update the statistics
                self.nodi_espansi += len(cbs.closed_set) + 1
                self.nodi_totali += len(cbs.open_set) + len(cbs.closed_set) + 1
                self.conflitti_totali += n_conflict_trovati
                #Return the paths in the correct format
                return cbs.generate_plan(P.solution)
                
            n_conflict_trovati += 1
            constraint_dict = cbs.env.create_constraints_from_conflict(conflict_dict) #Get the constraints (for both agents) from the conflict found
            are_equals = False

            for agent in constraint_dict.keys(): #For each agent involved in the conflict
                if conflict_dict.time_1 < len(P.solution[agent]):
                    new_node = deepcopy(P)
                    #Add the new constraints to the node
                    new_node.constraint_dict[agent].add_constraint(constraint_dict[agent])
                    #Split the constraints in vertex constraints and egde constraints
                    vc, ec = self.get_constraints(new_node.constraint_dict[agent])
                    #Compute the new path specifying the constraints that need to be satisfied
                    new_plan = await self.get_plan(agent, agents[agent]['start'], agents[agent]['goal'], vc, ec)
                    
                    if not len(new_plan[0].path.poses) == 0: #Path is not empty
                        #Set the node solution and compute the solution cost 
                        new_node.solution.update({agent: self.convert_plans(new_plan)[0]['path']})
                        new_node.cost = cbs.env.compute_solution_cost(new_node.solution)
                        
                        #DEBUG
                        #are_equals = self.are_equals(P.solution[agent], new_node.solution[agent], _print=False)
                        #if are_equals:
                        #    break
                        
                        #Insert the new node in the open_set if it is actually new
                        if new_node != {} and new_node not in cbs.closed_set:
                            cbs.open_set |= {new_node}
            #DEBUG
            #if are_equals:
            #    break
            
        #DEBUG
        #self.get_logger().info("OUT OF THE WHILE")
            
        return {}
    
    async def icbs_alg(self, plans, agents):
        cbs = CBS(agents, self.nx, self.ny, self.origin, self.map_resolution)
        #First solution computation, we already have it, so it is simply a conversion in the desired format
        start = cbs.get_starting_node(plans)
        cbs.open_set |= {start}
    
        while cbs.open_set: #Go on until the are nodes in the open_set
            #Get the node with the minimum solution cost, remove it from the open_set and put it in the closed_set
            P = min(cbs.open_set)
            cbs.open_set -= {P}
            
            conflict_dict = cbs.env.get_all_conflicts(P.solution) #Get all the conflicts created by the paths
            NC = len(conflict_dict) #Store the total number of conflict
            if not conflict_dict or conflict_dict == []:
                self.nodi_espansi += len(cbs.closed_set) + 1
                self.nodi_totali += len(cbs.open_set) + len(cbs.closed_set) + 1
                return cbs.generate_plan(P.solution)
            
            self.conflitti_totali += NC #Used for statistics
            #These variables will store the first non-cardinal and the first semi-cardinal conflict encountered in the conflict analysis
            first_non_cardinal_conflict = first_semi_cardinal_conflict = None
            for conf in conflict_dict:
                constraint_dict = cbs.env.create_constraints_from_conflict(conf)
                cardinal_conflict = 0
                new_plans = {}
                for agent in constraint_dict.keys(): #For each agent involved in the conflict
                    are_equals = False
                    cd = deepcopy(P.constraint_dict[agent])
                     #Add the new constraints to the node
                    cd.add_constraint(constraint_dict[agent])
                    #Split the constraints in vertex constraints and egde constraints
                    vc, ec = self.get_constraints(cd)
                    #Compute the new path specifying the constraints that need to be satisfied
                    new_plan = await self.get_plan(agent, agents[agent]['start'], agents[agent]['goal'], vc, ec)
                    if not len(new_plan[0].path.poses) == 0: #Path is not empty
                        
                        new_plans[agent] = new_plan
                        new_plan = self.convert_plans(new_plan)[0]['path']
                                
                        #DEBUG
                        #if self.are_equals(P.solution[agent], new_plan):
                        #    self.get_logger().info(str(conf))
                        #    are_equals = True
                        #    break

                        #If the length of the new plan is bigger the the length of the previous plan than the conflict is 
                        #cardinal for this agent. For a conflict to be actual cardinal it has to be cardinal for both agents.
                        if len(new_plan) > len(P.solution[agent]):
                            cardinal_conflict += 1

                #DEBUG
                #if are_equals:
                #    break
                    
                if cardinal_conflict == 2: #Conflict cardinal for both agents
                    
                    #In ICBS if a conflict is cardinal it is better to immediatly split the node in two children as in 
                    #standard CBS.
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
                        
                #When the conflict is semi-cardinal or non-cardinal, instead of splitting the nodes in two children it is better
                #to simply replace the previous paths with the new ones within the same node, giving priority to the first semi-cardinal
                #node. If no semi-cardinal node exists then the first non-cardinal node will be choosen. 
                elif cardinal_conflict == 1: #The conflict is semi-cardinal
                    if first_semi_cardinal_conflict == None:
                        agents_name = list(new_plans.keys())
                        tmp_solution = deepcopy(P.solution)
                        tmp_solution.update({agents_name[0]: self.convert_plans(new_plans[agents_name[0]])[0]['path']})
                        tmp_solution.update({agents_name[1]: self.convert_plans(new_plans[agents_name[1]])[0]['path']})
                        tmp_nc = len(cbs.env.get_all_conflicts(tmp_solution))
                          
                        if tmp_nc <= NC: #IS IT USEFUL?
                            first_semi_cardinal_conflict = new_plans

                elif first_non_cardinal_conflict == None: #The conflict is non-cardinal
                    agents_name = list(new_plans.keys())
                    tmp_solution = deepcopy(P.solution)
                    tmp_solution.update({agents_name[0]: self.convert_plans(new_plans[agents_name[0]])[0]['path']})
                    tmp_solution.update({agents_name[1]: self.convert_plans(new_plans[agents_name[1]])[0]['path']})
                    tmp_nc = len(cbs.env.get_all_conflicts(tmp_solution))
                    if tmp_nc <= NC: #IS IT USEFUL?
                        first_non_cardinal_conflict = new_plans

            #DEBUG
            #if are_equals:
            #    break

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
            
        #self.get_logger().info("OUT OF THE WHILE") #DEBUG
        return {}
    
    #This function will ask to the /get_plans ActionServer to computer a set of paths that meet the constraints
    async def get_plan(self, agent, start, end, vc = [], ec = [], smooth = False):
        msg = self.get_request_message(agent, start, end, vc, ec, smooth)
        client_request = StartGoalPoseStamped.Goal()
        client_request.requests = [msg]
        future = self.client_.send_goal_async(client_request)
        await future

        if not future.result().accepted:
            self.get_logger().info('Goal rejected :(')
            return
        
        get_result_future = future.result().get_result_async()
        await get_result_future

        service_response = get_result_future.result().result
        return service_response.plans #Plans of the agents
          
    #This function is used for debugging purposes. It checks the equality of two paths
    def are_equals(self, p1, p2, _print = True):
        if p2 == {}:
            return False
        
        if len(p1) != len(p2):
            return False
        
        for a1, a2 in zip(p1, p2):
            if a1 != a2:
                return False

        if _print: 
            for m in p1:
                tmp_x = int((m.location.pose_stamped.pose.position.x - self.origin['x'] ) / self.map_resolution)
                tmp_y = int((m.location.pose_stamped.pose.position.y - self.origin['y'] ) / self.map_resolution)
                self.get_logger().info(str(m.time) + " (" + str(round(tmp_y*self.nx + tmp_x)) + ")")
            self.get_logger().info(" --- ")
            for m in p2:
                tmp_x = int((m.location.pose_stamped.pose.position.x - self.origin['x'] ) / self.map_resolution)
                tmp_y = int((m.location.pose_stamped.pose.position.y - self.origin['y'] ) / self.map_resolution)
                self.get_logger().info(str(m.time) + " (" + str(round(tmp_y*self.nx + tmp_x)) + ")")
        return True

    def get_request_message(self, name, start, goal, vc = [], ec = [], smooth = False):
        #self.get_logger().info(str(name))
        msg = AgentPathRequest()
        msg.name = name
        msg.start = start
        msg.goal = goal
        msg.vertex_constraints = vc
        msg.edge_constraints = ec
        msg.smooth_plan = smooth
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
