#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from nav2_msgs.action import ComputePathToPose, FollowPath
from rclpy.action import ActionClient
from rclpy.node import Node
from functools import partial
from my_intermediate_interfaces.srv import StartGoalPoseStamped


class MultiAgentPlanAskerNode(Node):
    def __init__(self):
        super().__init__("multi_agent_plan_asker")

        self.plans_ = []
        self.create_service(StartGoalPoseStamped, "get_plans", self.callback_get_plan)

        self.get_logger().info("Multi Agent Plan Asker has been started")

    def callback_get_plan(self, request, response):

        self.plans_ = []
        s_e_couples = self.couple_request(request.starts, request.goals)
        self.get_logger().info("Asking for plans...")
        futures = self.ask_plan(s_e_couples)
        for f in futures:
            if not f.done():
                self.get_logger().error("PLAN ARE NOT COMPUTED YET!")
        response.plans = self.plans_
        return response

    def ask_plan(self, s_e_couples):

        i = 1
        futures = []
        for r in s_e_couples:

            client = ActionClient(self, ComputePathToPose, 'tb' + str(i) + '/compute_path_to_pose')
            client.wait_for_server()
        
            request = ComputePathToPose.Goal()
            request.goal = r['e']
            request.start = r['s']
            request.planner_id = ""
            request.use_start = False
            self.get_logger().info("Searching plan #" + str(i))
            future = client.send_goal_async(request)
            future.add_done_callback(partial(self.callback_ask_plan, i=i))
            futures.append(future)
            i += 1

            
        for f in futures:
            rclpy.spin_until_future_complete(self, f)

        return futures

    def callback_ask_plan(self, future, i):
        try:
            goal_handle = future.result()
            if not goal_handle.accepted:
                self.get_logger().warn('Goal rejected :(')
                return
            
            self.get_logger().info('Goal accepted, searching for plan...')

            result = goal_handle.get_result_async()
            result.add_done_callback(partial(self.callback_get_result, i=i))

            #if response.accepted 
            #time = response.planning_time
            #self.get_logger().info("Plan computed! Total time: " + time.sec)
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def callback_get_result(self, future, i):
        result = future.result().result
        self.plans_.append(result)
        self.get_logger().info("Plan #"+str(i)+ " found")
        #self.execute_plan(result, i)

    def execute_plan(self, result, i):
        client = ActionClient(self, FollowPath, 'tb' + str(i)+ '/follow_path')

        msg = FollowPath.Goal()
        msg.path = result.path
        msg.controller_id = ""
        msg.goal_checker_id = ""

        client.wait_for_server()

        future = client.send_goal_async(msg)
        future.add_done_callback(self.callback_execute_plan)

    def callback_execute_plan(self, future):
        try:
            goal_handle = future.result()
            if not goal_handle.accepted:
                self.get_logger().warn('Goal rejected :(')
                return
            
            self.get_logger().info('Goal accepted, executing plan...')

            result = goal_handle.get_result_async()
            result.add_done_callback(self.callback_result_execute_plan)
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def callback_result_execute_plan(self, future):
        self.get_logger().info("Plan executed correctly!")

    def couple_request(self, starts, goals):
        paths = []
        for i in range(starts):
            paths.append({"s": starts[i], "e": goals[i]})

        return paths
    
def main(args=None):
    rclpy.init(args=args)
    node = MultiAgentPlanAskerNode() 
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()