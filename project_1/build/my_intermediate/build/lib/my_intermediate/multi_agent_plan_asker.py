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
from functools import partial

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


class MultiAgentPlanAskerNode(Node):
    def __init__(self):
        super().__init__("multi_agent_plan_asker")

        default_x_start = [0]
        default_y_start = [0]
        default_z_start = [0]

        default_x_end = [0]
        default_y_end = [0]
        default_z_end = [0]
        
        self.declare_parameter("n", 1) #Number of agents
        self.declare_parameter("x_start", default_x_start)
        self.declare_parameter("y_start", default_y_start)
        self.declare_parameter("z_start", default_z_start)
        self.declare_parameter("x_end", default_x_end)
        self.declare_parameter("y_end", default_y_end)
        self.declare_parameter("z_end", default_z_end)
        self.get_logger().info("Plan Asker node has been started")

        x_start = self.get_parameter("x_start").value
        y_start = self.get_parameter("y_start").value
        z_start = self.get_parameter("z_start").value
        x_end = self.get_parameter("x_end").value
        y_end = self.get_parameter("y_end").value
        z_end = self.get_parameter("z_end").value
             
        self.starting_positions = self.compose_objects(x_start, y_start, z_start)
        self.ending_positions =  self.compose_objects(x_end, y_end, z_end)

        s_e_couples = self.convert_request() #Accoppia posizioni start e end per ogni robot e le converte in PosedStamped
        plans = self.ask_plan(s_e_couples)

    def ask_plan(self, s_e_couples):

        i = 1
        for r in s_e_couples:

            client = ActionClient(self, ComputePathToPose, 'tb' + i + '/compute_path_to_pose')
            client.wait_for_server()
        
            request = ComputePathToPose.Goal()
            request.goal = r['e']
            request.start = r['s']
            request.planner_id = ""
            request.use_start = False
            future = client.send_goal_async(request)
            future.add_done_callback(partial(self.callback_ask_plan, r, i))
            i += 1

        #future = client.call_async(request)
        #future.add_done_callback(self.callback_ask_plan)
        #self.get_logger().info("I will ask for a plan")

    def callback_ask_plan(self, future, r, i):
        try:
            goal_handle = future.result()
            if not goal_handle.accepted:
                self.get_logger().warn('Goal rejected :(')
                return
            
            self.get_logger().info('Goal accepted, searching for plan #'+i+"...")

            result = goal_handle.get_result_async()
            result.add_done_callback(partial(self.callback_get_result))

            #if response.accepted 
            #time = response.planning_time
            #self.get_logger().info("Plan computed! Total time: " + time.sec)
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def callback_get_result(self, future):
        result = future.result().result
        self.execute_plan(result)

    def execute_plan(self, result):
        client = ActionClient(self, FollowPath, 'follow_path')

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

    def convert_request(self):

        requests = []

        if len(self.starting_positions) != len(self.ending_positions):
            self.get_logger().error("Size of starting positions and ending positions does not match")
            return
        
        self.get_logger().info("ATTENZIONE: " + str(len(self.starting_positions)))
        
        for i in range(len(self.starting_positions)):
            start = self.from_object_to_PoseStamped(self.starting_positions[i])
            end = self.from_object_to_PoseStamped(self.ending_positions[i])
            requests.append({"s":start, "e":end})

        return requests

    
    def from_object_to_PoseStamped(self, obj):
        pose_stamped = PoseStamped()
        header = Header()
        
        header.stamp = Time()
        header.stamp.sec = 0
        header.stamp.nanosec = 0
        header.frame_id = 'map'

        pose = Pose()
        pose.position = Point()
        pose.position.x = obj['x']
        pose.position.y = obj['y']
        pose.position.z = obj['z']

        pose_stamped.header = header
        pose_stamped.pose = pose

        return pose_stamped
    
    def compose_objects(self, x, y, z):
        objs = []
        if len(x) == len(y) and len(x) == len(z):
            for i in range(len(x)):
                objs.append({'x': x[i], 'y':y[i], 'z':z[i]})
                
        return objs

    
     
def main(args=None):
    rclpy.init(args=args)
    node = MultiAgentPlanAskerNode() 
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()