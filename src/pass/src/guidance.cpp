#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>
#include <string>
#include <fstream>

using namespace std::chrono_literals; // chrono_literals 네임스페이스를 포함

class GuidanceNode : public rclcpp::Node
{
public:
    GuidanceNode() : Node("guidance_node")
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>("guidance_topic", 10);
        timer_ = this->create_wall_timer(
            500ms, std::bind(&GuidanceNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        auto message = std_msgs::msg::String();
        message.data = "Guidance message";
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
        publisher_->publish(message);
    }
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<GuidanceNode>());
    rclcpp::shutdown();
    return 0;
}
