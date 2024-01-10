#This node is mainly used for launching the experiments tried during the development of the project.
#The main idea is to ask for a n number of different paths, sending to the /cbs_plans ActionServer the x and y coordinates
#to reach for each robot. In a final implementation this node need to be replaced with a smarter node, since here
#the coordinates to reach are hand-crafted. In a real-scenario experiment the coordinates should be generated a run-time,
#using for example a PDDL planner to determine the best next position to reach.

#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rclpy.action import ActionClient, ActionServer
from nav2_msgs.action import FollowPath
from cbs_interfaces.action import StartGoalPositions
from cbs_interfaces.msg import StartGoal
from std_msgs.msg import Empty
import asyncio
import time

class PlanAskerNode(Node):
    def __init__(self):
        super().__init__("plan_asker")
        self.declare_parameter("num_agents", 2) #Indicates the number of agents involved
        self.get_logger().info("Plan Asker node has been started")

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

        client_cb_group = MutuallyExclusiveCallbackGroup()#CallbackGroup used for the /robotinobase<n> ActionClients
        
        #This node will reqeust to the /cbs_plans ActionServer for the paths
        self.client = ActionClient(self, StartGoalPositions, "cbs_plans", callback_group=client_cb_group)
        while not self.client.wait_for_server(1.0):
            self.get_logger().warn("Waiting for Server /cbs_plans...")

        self.index = 0
        self.time_ = time.time()
        self.start_test(self.positions[0])

    def start_test(self, pos):
        
        self.plans_completed = 0 #Keep track of the number of path computed and followed.

        #Prepare request for paths
        objs = []
        for a in pos:
            obj = StartGoal()
            obj.start.x = 0.0
            obj.start.y = 0.0
            obj.start.z = 0.0
            obj.goal.x = a[0]
            obj.goal.y = a[1]
            obj.goal.z = a[2]
            objs.append(obj)
            
        client_request = StartGoalPositions.Goal()
        client_request.requests = objs

        future = self.client.send_goal_async(client_request)
        future.add_done_callback(self.callback_call_cbs_plans)

    def callback_call_cbs_plans(self, future):
        if not future.result().accepted:
            self.get_logger().info('Goal rejected :(')
            return
        get_result_future = future.result().get_result_async()
        get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        response = future.result().result
        #Execute all the plans
        for plan in response.plans:
            self.execute_plan(plan)  

    def execute_plan(self, result):
        client = ActionClient(self, FollowPath, result.name+ '/follow_path')
        msg = FollowPath.Goal()
        msg.path = result.path
        msg.controller_id = ""
        msg.goal_checker_id = ""
        client.wait_for_server()
        future = client.send_goal_async(msg) #Robot will execute the plan asynchronously
        future.add_done_callback(self.callback_execute_plan)

    def callback_execute_plan(self, future):
        try:
            goal_handle = future.result()
            if not goal_handle.accepted:
                self.get_logger().warn('Goal rejected :(')
                return
            
            self.get_logger().info('Goal accepted, executing plan...')
            result = goal_handle.get_result_async() #Robot will execute the plan asynchronously
            result.add_done_callback(self.callback_result_execute_plan)
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

    def callback_result_execute_plan(self, future):
        result = future.result().result
        self.get_logger().info("Plan executed correctly!")
        self.plans_completed += 1
        #Once all the robots have achieved their plans, if there are new positions to reach, other requests will be 
        #sent to the ActionServer
        if self.plans_completed == self.num_agents and len(self.positions) > self.index+1:
            self.index+=1
            self.start_test(self.positions[self.index])
        elif self.plans_completed == self.num_agents: #All plans performed and no new positions to reach
            end_time = time.time() - self.time_
            self.get_logger().info(str(end_time)) #Print final time
            
     
def main(args=None):
    rclpy.init(args=args)
    node = PlanAskerNode()
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()  