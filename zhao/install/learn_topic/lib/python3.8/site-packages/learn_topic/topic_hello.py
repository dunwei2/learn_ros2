from platform import node
import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class PulisherNode(Node):
    def __init__(self,name) :
        super().__init__(name)
        self.pub = self.create_publisher(String ,"chatter",10)
        self.timer = self.create_timer(0.5,self.timer_recall)
    def timer_recall(self):
        msg = String()
        msg.data = "helloworld"
        self.pub.publish(msg)
        self.get_logger().info("publish '%s'"%msg.data)
        

def main(args = None):
    rclpy.init()
    node =PulisherNode("my_first_node")
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
