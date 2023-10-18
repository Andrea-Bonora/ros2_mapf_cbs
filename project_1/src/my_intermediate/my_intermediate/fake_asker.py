#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rclpy.action import ActionClient
from nav2_msgs.action import FollowPath
from my_intermediate_interfaces.srv import StartGoalPositions


class FakeAskerNode(Node):
    def __init__(self):
        super().__init__("fake_asker")

        default_x_start = [0.0]
        default_y_start = [0.0]
        default_z_start = [0.0]

        default_x_end = [0.0]
        default_y_end = [0.0]
        default_z_end = [0.0]
        
        self.declare_parameter("n", 1) #Number of agents
        self.declare_parameter("x_start", default_x_start)
        self.declare_parameter("y_start", default_y_start)
        self.declare_parameter("z_start", default_z_start)
        self.declare_parameter("x_end", default_x_end)
        self.declare_parameter("y_end", default_y_end)
        self.declare_parameter("z_end", default_z_end)
        self.get_logger().info("Plan Asker node has been started")


        client_cb_group = MutuallyExclusiveCallbackGroup()
        client = self.create_client(StartGoalPositions, "cbs_plans", callback_group=client_cb_group)
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /cbs_plans...")

        client_request = StartGoalPositions.Request()
        client_request.start_x = self.get_parameter("x_start").value
        client_request.start_y = self.get_parameter("y_start").value
        client_request.start_z = self.get_parameter("z_start").value
        client_request.end_x = self.get_parameter("x_end").value
        client_request.end_y = self.get_parameter("y_end").value
        client_request.end_z = self.get_parameter("z_end").value

        future = client.call_async(client_request)
        future.add_done_callback(self.callback_call_cbs_plans)

    def callback_call_cbs_plans(self, future):
        try:
            response = future.result()
            self.get_logger().info("Got Plans: " + str(len(response.plans)))
            for i, plan in enumerate(response.plans):
                self.execute_plan(plan, i+1)

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))   

    def execute_plan(self, result, i):
        client = ActionClient(self, FollowPath, 'tb' + str(i)+ '/follow_path')

        msg = FollowPath.Goal()
        msg.path = result
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
     
def main(args=None):
    rclpy.init(args=args)
    node = FakeAskerNode() 
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()