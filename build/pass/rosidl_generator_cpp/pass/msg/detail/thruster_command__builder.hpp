// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pass:msg/ThrusterCommand.idl
// generated code does not contain a copyright notice

#ifndef PASS__MSG__DETAIL__THRUSTER_COMMAND__BUILDER_HPP_
#define PASS__MSG__DETAIL__THRUSTER_COMMAND__BUILDER_HPP_

#include "pass/msg/detail/thruster_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace pass
{

namespace msg
{

namespace builder
{

class Init_ThrusterCommand_rps_s
{
public:
  explicit Init_ThrusterCommand_rps_s(::pass::msg::ThrusterCommand & msg)
  : msg_(msg)
  {}
  ::pass::msg::ThrusterCommand rps_s(::pass::msg::ThrusterCommand::_rps_s_type arg)
  {
    msg_.rps_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pass::msg::ThrusterCommand msg_;
};

class Init_ThrusterCommand_rps_p
{
public:
  explicit Init_ThrusterCommand_rps_p(::pass::msg::ThrusterCommand & msg)
  : msg_(msg)
  {}
  Init_ThrusterCommand_rps_s rps_p(::pass::msg::ThrusterCommand::_rps_p_type arg)
  {
    msg_.rps_p = std::move(arg);
    return Init_ThrusterCommand_rps_s(msg_);
  }

private:
  ::pass::msg::ThrusterCommand msg_;
};

class Init_ThrusterCommand_delta_s
{
public:
  explicit Init_ThrusterCommand_delta_s(::pass::msg::ThrusterCommand & msg)
  : msg_(msg)
  {}
  Init_ThrusterCommand_rps_p delta_s(::pass::msg::ThrusterCommand::_delta_s_type arg)
  {
    msg_.delta_s = std::move(arg);
    return Init_ThrusterCommand_rps_p(msg_);
  }

private:
  ::pass::msg::ThrusterCommand msg_;
};

class Init_ThrusterCommand_delta_p
{
public:
  Init_ThrusterCommand_delta_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrusterCommand_delta_s delta_p(::pass::msg::ThrusterCommand::_delta_p_type arg)
  {
    msg_.delta_p = std::move(arg);
    return Init_ThrusterCommand_delta_s(msg_);
  }

private:
  ::pass::msg::ThrusterCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pass::msg::ThrusterCommand>()
{
  return pass::msg::builder::Init_ThrusterCommand_delta_p();
}

}  // namespace pass

#endif  // PASS__MSG__DETAIL__THRUSTER_COMMAND__BUILDER_HPP_
