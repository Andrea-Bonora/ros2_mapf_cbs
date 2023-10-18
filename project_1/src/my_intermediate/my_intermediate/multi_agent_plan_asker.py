#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from nav2_msgs.action import ComputePathToPose, FollowPath
from rclpy.action import ActionClient
from rclpy.node import Node
from functools import partial
from my_intermediate_interfaces.srv import StartGoalPoseStamped
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup


class MultiAgentPlanAskerNode(Node):
    def __init__(self):
        super().__init__("multi_agent_plan_asker")

        self.plans_ = []
        self.s_e_couples = None
        #self.futures = []
        
        client_cb_group = MutuallyExclusiveCallbackGroup()
        self.server_ = self.create_service(StartGoalPoseStamped, "get_plans", self.callback_get_plan, callback_group=client_cb_group)
        self.get_logger().info("Multi Agent Plan Asker has been started")

    def callback_get_plan(self, request, response):

        self.plans_ = []
        s_e_couples = self.couple_request(request.starts, request.goals)
        self.get_logger().info("Asking for plans...")
        plans = self.ask_plan(s_e_couples)
        self.get_logger().info(str(len(plans)))
        self.get_logger().info("Sending Response")
        response.plans = plans
        return response

    def ask_plan(self, s_e_couples):

        i = 1
        futures = []
        client_cb_group_actions = MutuallyExclusiveCallbackGroup()
        for r in s_e_couples:

            client = ActionClient(self, ComputePathToPose, 'tb' + str(i) + '/compute_path_to_pose', callback_group=client_cb_group_actions)
            client.wait_for_server()
        
            request = ComputePathToPose.Goal()
            request.goal = r['e']
            request.start = r['s']
            request.planner_id = ""
            request.use_start = False
            self.get_logger().info("Searching plan #" + str(i))
            future = client.send_goal_async(request)
            #future.add_done_callback(partial(self.callback_ask_plan, i=i))
            futures.append(future)
            i += 1

        for f in futures:
            rclpy.spin_until_future_complete(self, f)

        results = []
        for f in futures:
            if not f.done():
               self.get_logger().info("Non va DC") 
            elif f.result().accepted:
               goal_handle = f.result()
               result = goal_handle.get_result_async()
               #result.add_done_callback(partial(self.callback_get_result, i=i))
               results.append(result)
               self.get_logger().info("PROVA")

        for r in results:
            rclpy.spin_until_future_complete(self, r)

        plans = []
        for r in results:
            result = r.result().result
            plans.append(result.path)
            self.get_logger().info("Plan found")
        
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
    #node.spin()
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()