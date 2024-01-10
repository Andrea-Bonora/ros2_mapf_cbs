#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rclpy.action import ActionClient, ActionServer
from nav2_msgs.action import NavigateToPose
from builtin_interfaces.msg import Time
from std_msgs.msg import Header
import time

class BaselineAskerNode(Node):
    def __init__(self):
        super().__init__("baseline_asker")
        self.declare_parameter("num_agents", 2) #Indicates the number of agents involved
        self.get_logger().info("Baseline Asker node has been started")

        #Hand-crafted coordinates
        self.positions = [
            [[-4.40, 2.55, 0.0], [-4.40, 4.84, 0.0]],   
            [[-2.68, 4.60, 0.0], [-2.68, 2.60, 0.0]],
            [[-2.30, 1.65, 0.0], [2.60, 2.30, 0.0]],
            [[4.60, 4.05, 0.0], [-1.9, 1.40, 0.0]],
            [[-1.90, 5.00, 0.0], [-5.00, 5.30, 0.0]],
            [[-5.00, 2.10, 0.0], [3.90, 4.84, 0.0]],
            [[4.20, 2.10, 0.0], [-1.85, 1.35, 0.0]],
            [[-4.40, 2.55, 0.0], [4.84, 2.92, 0.0]]
        ]
        
        client_cb_group = MutuallyExclusiveCallbackGroup() #CallbackGroup used for the /robotinobase<n>/navigate_to_pose ActionClients

        self.num_agents = self.get_parameter("num_agents").value
        
        #Define the ActionClients, one for each agent, and wait until all of them are working
        #The baseline simply ask to the ActionServer to compute a path to reach a specific point and then 
        #to navigate to that point following the computed path. The other robots are not taken under consideration.
        self.clients_ = []
        for i in range(self.num_agents):
            self.clients_.append(ActionClient(self, NavigateToPose, "/robotinobase" + str(i+1) + "/navigate_to_pose", callback_group=client_cb_group)) 
        
        for i, client_ in enumerate(self.clients_):
            while not client_.wait_for_server(1.0):
                self.get_logger().warn("Waiting for Server /robotinobase"+ str(i+1) +"/navigate_to_pose")

        self.index = 0
        self.time_ = time.time() #Set the initial time of the experiment
        self.start_test(self.positions[0]) #Start test by asking all the robots to go to the first indicated positions

    def start_test(self, pos):
        self.plans_completed = 0 #Keep track of how many plans have been computed so far

        self.get_logger().info("Asking for plans...")

        #Prepare the message to send to the Server. 
        for i, client_ in enumerate(self.clients_):
            msg = NavigateToPose.Goal()
            header = Header() 

            header.stamp = Time()
            header.stamp.sec = 0
            header.stamp.nanosec = 0
            header.frame_id = 'map' #Set the frame_id
            msg.pose.header = header
            #Set the position for the i-th robot
            msg.pose.pose.position.x = pos[i][0]
            msg.pose.pose.position.y = pos[i][1]
            msg.pose.pose.position.z = pos[i][2]

            future = client_.send_goal_async(msg)
            future.add_done_callback(self.callback_call_navigate)

    def callback_call_navigate(self, future):
        response = future.result()

        if not future.result().accepted:
            self.get_logger().info('Goal rejected :(')
            return
        
        get_result_future = future.result().get_result_async() #Robot will execute the plan asynchronously
        get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        response = future.result().result
        self.plans_completed += 1
        #Once all the robots have achieved their plans, if there are new positions to reach, other requests will be 
        #sent to the ActionServer
        if self.plans_completed == self.num_agents and len(self.positions) > self.index+1:
            self.index += 1
            self.start_test(self.positions[self.index])
        elif self.plans_completed == self.num_agents: #All plans performed and no new positions to reach
            end_time = time.time() - self.time_
            self.get_logger().info(str(end_time)) #Print final time
            
     
def main(args=None):
    rclpy.init(args=args)
    node = BaselineAskerNode()
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()  