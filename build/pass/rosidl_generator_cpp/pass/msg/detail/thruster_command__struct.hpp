// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pass:msg/ThrusterCommand.idl
// generated code does not contain a copyright notice

#ifndef PASS__MSG__DETAIL__THRUSTER_COMMAND__STRUCT_HPP_
#define PASS__MSG__DETAIL__THRUSTER_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__pass__msg__ThrusterCommand __attribute__((deprecated))
#else
# define DEPRECATED__pass__msg__ThrusterCommand __declspec(deprecated)
#endif

namespace pass
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ThrusterCommand_
{
  using Type = ThrusterCommand_<ContainerAllocator>;

  explicit ThrusterCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_p = 0.0;
      this->delta_s = 0.0;
      this->rps_p = 0.0;
      this->rps_s = 0.0;
    }
  }

  explicit ThrusterCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_p = 0.0;
      this->delta_s = 0.0;
      this->rps_p = 0.0;
      this->rps_s = 0.0;
    }
  }

  // field types and members
  using _delta_p_type =
    double;
  _delta_p_type delta_p;
  using _delta_s_type =
    double;
  _delta_s_type delta_s;
  using _rps_p_type =
    double;
  _rps_p_type rps_p;
  using _rps_s_type =
    double;
  _rps_s_type rps_s;

  // setters for named parameter idiom
  Type & set__delta_p(
    const double & _arg)
  {
    this->delta_p = _arg;
    return *this;
  }
  Type & set__delta_s(
    const double & _arg)
  {
    this->delta_s = _arg;
    return *this;
  }
  Type & set__rps_p(
    const double & _arg)
  {
    this->rps_p = _arg;
    return *this;
  }
  Type & set__rps_s(
    const double & _arg)
  {
    this->rps_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pass::msg::ThrusterCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const pass::msg::ThrusterCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pass::msg::ThrusterCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pass::msg::ThrusterCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pass::msg::ThrusterCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pass::msg::ThrusterCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pass::msg::ThrusterCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pass::msg::ThrusterCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pass::msg::ThrusterCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pass::msg::ThrusterCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pass__msg__ThrusterCommand
    std::shared_ptr<pass::msg::ThrusterCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pass__msg__ThrusterCommand
    std::shared_ptr<pass::msg::ThrusterCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ThrusterCommand_ & other) const
  {
    if (this->delta_p != other.delta_p) {
      return false;
    }
    if (this->delta_s != other.delta_s) {
      return false;
    }
    if (this->rps_p != other.rps_p) {
      return false;
    }
    if (this->rps_s != other.rps_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const ThrusterCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ThrusterCommand_

// alias to use template instance with default allocator
using ThrusterCommand =
  pass::msg::ThrusterCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pass

#endif  // PASS__MSG__DETAIL__THRUSTER_COMMAND__STRUCT_HPP_
