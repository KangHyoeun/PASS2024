#include "rclcpp/rclcpp.hpp"
#include "pass/msg/thruster_command.hpp"  // custom message include
#include <chrono>
#include <string>
#include <fstream>
#include <algorithm>  // std::clamp 사용

using namespace std::chrono_literals;

class ControlNode : public rclcpp::Node
{
public:
    ControlNode(const rclcpp::NodeOptions & options)
    : Node("control_node", options), kp_(1.0), kd_(0.1), lpf_tau_(0.5), prev_error_(0.0), prev_filtered_output_(0.0), psi_d_(0.0), desired_velocity_(0.0)
    {
        this->get_parameter("kp", kp_);
        this->get_parameter("kd", kd_);
        this->get_parameter("lpf_tau", lpf_tau_);

        psi_d_sub = this->create_subscription<std_msgs::msg::Float64>(
            "psi_d", 10, std::bind(&ControlNode::psi_d_callback, this, std::placeholders::_1));

        desired_vel_sub = this->create_subscription<std_msgs::msg::Float64>(
            "desired_velocity", 10, std::bind(&ControlNode::desired_velocity_callback, this, std::placeholders::_1));

        thruster_pub = this->create_publisher<pass::msg::ThrusterCommand>("thruster_command", 10);

        timer_ = this->create_wall_timer(100ms, std::bind(&ControlNode::control_loop, this));

        thruster_msg_ = std::make_shared<pass::msg::ThrusterCommand>();
    }

private:
    void psi_d_callback(const std_msgs::msg::Float64::SharedPtr msg)
    {
        psi_d_ = msg->data;
    }

    void desired_velocity_callback(const std_msgs::msg::Float64::SharedPtr msg)
    {
        desired_velocity_ = msg->data;
    }

    double limit_value(double value, double min_value, double max_value)
    {
        return std::clamp(value, min_value, max_value);
    }

    double low_pass_filter(double input)
    {
        double alpha = lpf_tau_ / (lpf_tau_ + 0.1);  // 0.1은 샘플링 시간 (100ms)
        prev_filtered_output_ = alpha * prev_filtered_output_ + (1 - alpha) * input;
        return prev_filtered_output_;
    }

    void control_loop()
    {
        double current_psi = 0.0;
        double error = psi_d_ - current_psi;
        double derivative = error - prev_error_;
        double control_output = kp_ * error + kd_ * derivative;
        prev_error_ = error;

        double filtered_output = low_pass_filter(control_output);

        thruster_msg_->delta_p = limit_value(filtered_output, -35.0, 35.0);
        thruster_msg_->delta_s = limit_value(filtered_output, -35.0, 35.0);
        thruster_msg_->rps_p = limit_value(desired_velocity_, 1000.0, 3000.0);
        thruster_msg_->rps_s = limit_value(desired_velocity_, 1000.0, 3000.0);

        thruster_pub->publish(*thruster_msg_);
    }

    double kp_, kd_, lpf_tau_, prev_error_, prev_filtered_output_, psi_d_, desired_velocity_;

    rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr psi_d_sub, desired_vel_sub;
    rclcpp::Publisher<pass::msg::ThrusterCommand>::SharedPtr thruster_pub;
    rclcpp::TimerBase::SharedPtr timer_;
    pass::msg::ThrusterCommand::SharedPtr thruster_msg_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::NodeOptions options;
    std::string default_param_file = "/root/ros2_ws/src/pass/config/control_params.yaml";
    
    if (std::ifstream(default_param_file)) {
        options.arguments({"--ros-args", "--params-file", default_param_file});
    } else {
        RCLCPP_WARN(rclcpp::get_logger("rclcpp"), "Parameter file %s not found. Using default parameters.", default_param_file.c_str());
    }

    auto node = std::make_shared<ControlNode>(options);
    
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
