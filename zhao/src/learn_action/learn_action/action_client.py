import rclpy
from rclpy.node import Node 
from rclpy.action import ActionClient 

from learn_interface.action import MoveCircle

class MoveCircleClient(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.action_client = ActionClient(self,MoveCircle,"moveCircle")

    def send_goal(self,enable):
        goal_msg = MoveCircle.Goal()
        goal_msg.enable = enable
        self.action_client.wait_for_server()
        self.send_goal_future = self.action_client.send_goal_async(
            goal_msg,feedback_callback=self.feedback_callback
        )
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self,future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info("Goal rejected !")
            return
        self.get_logger().info("goal accept  !")
        self.get_result_future = goal_handle.get_result_async()
        self.get_result_future.add_done_callback(self.get_result_callback)

    def feedback_callback(self,feedback_msg):
        feedBack = feedback_msg.feedback
        self.get_logger().info("received feedback: %d !"%feedBack.state)

    def get_result_callback(self,future):
        result = future.result().result
        self.get_logger().info("i am done , result %d ! "%result.finish)

def main():
    rclpy.init()
    node = MoveCircleClient("ActionClient")
    node.send_goal(True)
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()