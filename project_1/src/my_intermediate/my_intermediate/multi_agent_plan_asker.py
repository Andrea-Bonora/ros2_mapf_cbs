#This node communicates with the planner_server of each agent using the /compute_path_to_pose
#action server. The idea is simply to obtain a plan from a starting point to an end point.
#NOT DONE. The planner should take into account all the constraints imposed by the collision_avoider node 
# and compute plan based on them. To do this a modification of the planner is needed.

#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from rclpy.action import ActionClient
from rclpy.node import Node
from my_intermediate_interfaces.srv import StartGoalPoseStamped
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from my_intermediate_interfaces.msg import AgentPath
from my_intermediate_interfaces.action import MyComputePathToPose
from nav2_msgs.action import ComputePathToPose


class MultiAgentPlanAskerNode(Node):
    def __init__(self):
        super().__init__("multi_agent_plan_asker")
        client_cb_group = MutuallyExclusiveCallbackGroup()
        self.server_ = self.create_service(StartGoalPoseStamped, "get_plans", self.callback_get_plan, callback_group=client_cb_group)
        self.get_logger().info("Multi Agent Plan Asker has been started")

    async def callback_get_plan(self, request, response):

        self.plans_ = []
        self.get_logger().info("Asking for plans...")
        plans = await self.ask_plan(request)
        self.get_logger().info(str(len(plans)))
        self.get_logger().info("Sending Response")
        response.plans = plans
        return response

    async def ask_plan(self, s_request):

        futures = []
        #self.get_logger().info(str(len(s_request.requests)))
        for i in range(len(s_request.requests)):
            r = s_request.requests[i]
            client_cb_group_actions = MutuallyExclusiveCallbackGroup()
            client = ActionClient(self, MyComputePathToPose, r.name + '/compute_path_to_pose_cbs', callback_group=client_cb_group_actions)
            client.wait_for_server()
        
            request = MyComputePathToPose.Goal()
            request.goal = r.goal
            request.start = r.start
            request.planner_id = ""
            request.use_start = False
            request.vertex_constraints = r.vertex_constraints
            request.edge_constraints = r.edge_constraints
            #self.get_logger().info("Searching plan for " + r.name)
            future = client.send_goal_async(request)
            #future.add_done_callback(partial(self.callback_ask_plan, i=i))
            futures.append(future)

        for f in futures:
            await f

        results = []
        for f in futures:
            if not f.done():
               self.get_logger().info("Non va") 
            elif f.result().accepted:
               goal_handle = f.result()
               result = goal_handle.get_result_async()
               #result.add_done_callback(partial(self.callback_get_result, i=i))
               results.append(result)

        for r in results:
            await r
            
        plans = []
        for i, r in enumerate(results):
            result = r.result().result
            ap = AgentPath()
            ap.name = s_request.requests[i].name
            ap.path = result.path
            plans.append(ap)
            #self.get_logger().info("Plan found")
        
        return plans

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