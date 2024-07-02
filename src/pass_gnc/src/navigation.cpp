#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class NavigationNode : public rclcpp::Node
{
public:
    NavigationNode() : Node("navigation_node")
    {
        subscription_ = this->create_subscription<std_msgs::msg::String>(
            "guidance_topic", 10, std::bind(&NavigationNode::topic_callback, this, std::placeholders::_1));
    }

private:
    void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
    {
        RCLCPP_INFO(this->get_logger(), "Received: '%s'", msg->data.c_str());
    }
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<NavigationNode>());
    rclcpp::shutdown();
    return 0;
}
