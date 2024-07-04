// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pass:msg/ThrusterCommand.idl
// generated code does not contain a copyright notice

#ifndef PASS__MSG__DETAIL__THRUSTER_COMMAND__TRAITS_HPP_
#define PASS__MSG__DETAIL__THRUSTER_COMMAND__TRAITS_HPP_

#include "pass/msg/detail/thruster_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<pass::msg::ThrusterCommand>()
{
  return "pass::msg::ThrusterCommand";
}

template<>
inline const char * name<pass::msg::ThrusterCommand>()
{
  return "pass/msg/ThrusterCommand";
}

template<>
struct has_fixed_size<pass::msg::ThrusterCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<pass::msg::ThrusterCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<pass::msg::ThrusterCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PASS__MSG__DETAIL__THRUSTER_COMMAND__TRAITS_HPP_
