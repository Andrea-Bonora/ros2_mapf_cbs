#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from std_msgs.msg import Header
from nav2_msgs.action import ComputePathToPose, FollowPath
from geometry_msgs.msg import Pose, PoseStamped, Point, Quaternion
from nav_msgs.msg import Path
from builtin_interfaces.msg import Duration, Time
from rclpy.action import ActionClient
from rclpy.node import Node


#MESSAGE TO SEND
# PoseStamped goal
# PoseStamped start
# string planner_id
# bool use_start

#Header
#uint32 seq
#time stamp
#string frame_id

#PoseStamped
# Header header
# Pose pose


class PlanAskerNode(Node):
    def __init__(self):
        super().__init__("plan_asker")
        self.declare_parameter("x", 0.0)
        self.declare_parameter("y", 0.0)
        self.declare_parameter("z", 0.0)
        self.get_logger().info("Plan Asker node has been started")

        x_goal = self.get_parameter("x").value
        y_goal = self.get_parameter("y").value
        z_goal = self.get_parameter("z").value
        

        self.start_ = self.get_starting_point()
        self.end_ = self.get_end_point(x_goal, y_goal, z_goal)
        self.ask_plan(self.start_, self.end_)

    def ask_plan(self, starting_point, end_point):
        client = ActionClient(self, ComputePathToPose, 'tb1/compute_path_to_pose')

        request = ComputePathToPose.Goal()
        request.goal = end_point
        request.start = starting_point
        request.planner_id = ""
        request.use_start = False

        client.wait_for_server()

        future = client.send_goal_async(request)
        future.add_done_callback(self.callback_ask_plan)

        #future = client.call_async(request)
        #future.add_done_callback(self.callback_ask_plan)
        #self.get_logger().info("I will ask for a plan")

    def callback_ask_plan(self, future):
        try:
            goal_handle = future.result()
            if not goal_handle.accepted:
                self.get_logger().warn('Goal rejected :(')
                return
            
            self.get_logger().info('Goal accepted, searching for a plan...')

            result = goal_handle.get_result_async()
            result.add_done_callback(self.callback_get_result)

            #if response.accepted 
            #time = response.planning_time
            #self.get_logger().info("Plan computed! Total time: " + time.sec)
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def callback_get_result(self, future):
        result = future.result().result
        self.execute_plan(result)

    def execute_plan(self, result):
        client = ActionClient(self, FollowPath, 'tb1/follow_path')

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

    def get_starting_point(self):
        msg = PoseStamped()
        header = Header()
        #header.seq = 1
        header.stamp = Time()
        header.stamp.sec = 0
        header.stamp.nanosec = 0
        header.frame_id = 'map'

        pose = Pose()
        pose.position = Point()
        pose.position.x = -2.54
        pose.position.y = 0.012
        pose.position.z = 0.0

        pose.orientation = Quaternion()
        pose.orientation.x = 0.0
        pose.orientation.y = 0.0
        pose.orientation.z = -0.5
        pose.orientation.w = 0.86

        msg.header = header
        msg.pose = pose

        return msg

    #x = -2.54, y = 0.012, z = 0.0
    #ros2 run my_intermediate plan_asker --ros-args -p x:=-2.54 -p y:=0.012
    #x = 2.01, y = -0.045 z = 0.0
    #ros2 run my_intermediate plan_asker --ros-args -p x:=2.01 -p y:=-0.045
    def get_end_point(self, x, y, z):
        msg = PoseStamped()
        header = Header()
        #header.seq = 1
        header.stamp = Time()
        header.stamp.sec = 0
        header.stamp.nanosec = 0
        header.frame_id = 'map'

        pose = Pose()
        pose.position = Point()
        pose.position.x = x
        pose.position.y = y
        pose.position.z = z

        pose.orientation = Quaternion()
        pose.orientation.x = 0.0
        pose.orientation.y = 0.0
        pose.orientation.z = -0.5
        pose.orientation.w = 0.86

        msg.header = header
        msg.pose = pose

        return msg
     
def main(args=None):
    rclpy.init(args=args)
    node = PlanAskerNode() 
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()