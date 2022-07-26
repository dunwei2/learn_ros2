
import time

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from learn_interface.action import MoveCircle

class MoveCircleServer(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.server = ActionServer(self,MoveCircle,"moveCircle",self.exec_feedback)
        self.get_logger().info("action server start,waiting comment....")
    def exec_feedback(self,goal_handld):
        self.get_logger().info("start moving....")
        feedback_msg = MoveCircle.Feedback()

        for i in range(0,360):
            feedback_msg.state = i
            self.get_logger().info("feedback: %d"%feedback_msg.state)
            goal_handld.publish_feedback(feedback_msg)
            time.sleep(0.1)
        goal_handld.succeed()
        result = MoveCircle.Result()
        result.finish = True
        return result



def main():
    rclpy.init()
    node = MoveCircleServer("action_server")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()