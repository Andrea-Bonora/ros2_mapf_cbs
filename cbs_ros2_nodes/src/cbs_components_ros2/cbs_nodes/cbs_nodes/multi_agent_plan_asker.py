#This node communicates with the planner_server of each agent using the /compute_path_to_pose
#action server. The idea is simply to obtain a plan from a starting point to an end point.

#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from rclpy.action import ActionClient, ActionServer
from rclpy.node import Node
from cbs_interfaces.action import StartGoalPoseStamped
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from cbs_interfaces.msg import AgentPath
from cbs_interfaces.action import ComputePathToPoseCBS
from nav2_msgs.action import ComputePathToPose


class MultiAgentPlanAskerNode(Node):
    def __init__(self):
        super().__init__("multi_agent_plan_asker")
        self.declare_parameter("max_num_agents", 2)
        
        client_cb_group = MutuallyExclusiveCallbackGroup() #CallbackGroup used for the /get_plans ActionServer
        client_cb_group_actions = MutuallyExclusiveCallbackGroup() #CallbackGroup used for the /compute_path_to_pose_cbs ActionClients

        num_agents = self.get_parameter("max_num_agents")
        self.get_logger().info("Multi Agent Plan Asker has been started")

        self.server_ = ActionServer(self, StartGoalPoseStamped, "get_plans", self.callback_get_plan, callback_group=client_cb_group)
        self.clients_ = []

        #An ActionClient will be created for each robot involved in the experiment. Not all the ActionClients will be used in the
        #same request all the time, but it is better to store all of them in a list instead of creating an ActionClient every
        #time there is the need of it
        for i in range(num_agents):
            tmp_client = ActionClient(self, ComputePathToPoseCBS, '/robotinobase'+ str(i+1) +'/compute_path_to_pose_cbs', callback_group=client_cb_group_actions)
            self.clients_.append(tmp_client)
            while not tmp_client.wait_for_server(timeout_sec = 1.0):
                self.get_logger().warn("Waiting for server " + '/robotinobase' + str(i+1) + '/compute_path_to_pose_cbs')


    async def callback_get_plan(self, goal_handle):

        request = goal_handle.request
        response = StartGoalPoseStamped.Result()

        plans = await self.ask_plan(request) #Ask for plans and wait for them

        goal_handle.succeed()
        response.plans = plans
        return response

    async def ask_plan(self, s_request):

        futures = []
        for i in range(len(s_request.requests)):
            r = s_request.requests[i]
            
            #Prepare the message to send
            request = ComputePathToPoseCBS.Goal()
            request.goal = r.goal
            request.start = r.start
            request.planner_id = ""
            request.use_start = False
            request.vertex_constraints = r.vertex_constraints #Include vertex constraints
            request.edge_constraints = r.edge_constraints #Include edge constraints
            request.smooth = r.smooth_plan

            future = self.clients_[int(r.name[-1])- 1].send_goal_async(request)
            futures.append(future)

        #Wait for all the requests to be accepted
        for f in futures:
            await f 

        results = []
        for f in futures:
            if f.result().accepted:
               goal_handle = f.result()
               result = goal_handle.get_result_async()
               results.append(result)
        
        #Wait for all the paths to be computed
        for r in results:
            await r
            
        plans = []
        for i, r in enumerate(results):
            result = r.result().result
            ap = AgentPath()
            ap.name = s_request.requests[i].name
            ap.path = result.path
            plans.append(ap)
        
        return plans

    #Link all the starting positions with the correct goal positions
    def couple_request(self, starts, goals):
        paths = []
        for i in range(len(starts)):
            paths.append({"s": starts[i], "e": goals[i]})
        return paths
    
def main(args=None):
    rclpy.init(args=args)
    node = MultiAgentPlanAskerNode()
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()