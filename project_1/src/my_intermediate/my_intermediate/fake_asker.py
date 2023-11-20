#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rclpy.action import ActionClient
from nav2_msgs.action import FollowPath
from my_intermediate_interfaces.srv import StartGoalPositions
from my_intermediate_interfaces.msg import StartGoal
from geometry_msgs.msg import Pose, PoseStamped, Point, Quaternion
from std_msgs.msg import Header
from builtin_interfaces.msg import Duration, Time


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

        x_start = self.get_parameter("x_start").value
        y_start = self.get_parameter("y_start").value
        z_start = self.get_parameter("z_start").value

        x_end = self.get_parameter("x_end").value
        y_end = self.get_parameter("y_end").value
        z_end = self.get_parameter("z_end").value
        
        objs = []
        if len(x_end) == len(y_end) and len(x_end) == len(z_end):
            for i in range(len(x_end)):
                obj = StartGoal()
                obj.start.x = x_start[i]
                obj.start.y = y_start[i]
                obj.start.z = z_start[i]
                obj.goal.x = x_end[i]
                obj.goal.y = y_end[i]
                obj.goal.z = z_end[i]
                objs.append(obj)
        
        client_request = StartGoalPositions.Request()
        client_request.requests = objs

        future = client.call_async(client_request)
        future.add_done_callback(self.callback_call_cbs_plans)

    def callback_call_cbs_plans(self, future):
        try:
            response = future.result()
            self.get_logger().info("Got Plans: " + str(len(response.plans)))

            for i, plan in enumerate(response.plans):
                self.get_logger().info(str(len(plan.path.poses)))
                for pose in plan.path.poses:
                    self.get_logger().info(str(pose.pose.position.x) + "-" + str(pose.pose.position.y))
                #self.execute_plan(plan)

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))   

    def execute_plan(self, result):
        client = ActionClient(self, FollowPath, result.name+ '/follow_path')

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
     
def main(args=None):
    rclpy.init(args=args)
    node = FakeAskerNode() 
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()