#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

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

        x_start = self.get_parameter("x_start").value
        y_start = self.get_parameter("y_start").value
        z_start = self.get_parameter("z_start").value
        x_end = self.get_parameter("x_end").value
        y_end = self.get_parameter("y_end").value
        z_end = self.get_parameter("z_end").value
    
        client = self.create_client(StartGoalPositions, "cbs_plans")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for Server /cbs_plans...")

        client_request = StartGoalPositions.Request()
        client_request.start_x = x_start
        client_request.start_y = y_start
        client_request.start_z = z_start
        client_request.end_x = x_end
        client_request.end_y = y_end
        client_request.end_z = z_end

        future = client.call_async(client_request)
        future.add_done_callback(self.callback_call_cbs_plans)

    def callback_call_cbs_plans(self, future):
        try:
            response = future.result()
            self.get_logger().info("Got Plans: " + str(len(response)))

        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))   
     
def main(args=None):
    rclpy.init(args=args)
    node = FakeAskerNode() 
    rclpy.spin(node)
    rclpy.shutdown()
     
     
if __name__ == "__main__":
    main()