// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pass:msg/ThrusterCommand.idl
// generated code does not contain a copyright notice
#include "pass/msg/detail/thruster_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pass/msg/detail/thruster_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace pass
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pass
cdr_serialize(
  const pass::msg::ThrusterCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: delta_p
  cdr << ros_message.delta_p;
  // Member: delta_s
  cdr << ros_message.delta_s;
  // Member: rps_p
  cdr << ros_message.rps_p;
  // Member: rps_s
  cdr << ros_message.rps_s;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pass
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pass::msg::ThrusterCommand & ros_message)
{
  // Member: delta_p
  cdr >> ros_message.delta_p;

  // Member: delta_s
  cdr >> ros_message.delta_s;

  // Member: rps_p
  cdr >> ros_message.rps_p;

  // Member: rps_s
  cdr >> ros_message.rps_s;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pass
get_serialized_size(
  const pass::msg::ThrusterCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: delta_p
  {
    size_t item_size = sizeof(ros_message.delta_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: delta_s
  {
    size_t item_size = sizeof(ros_message.delta_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rps_p
  {
    size_t item_size = sizeof(ros_message.rps_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rps_s
  {
    size_t item_size = sizeof(ros_message.rps_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pass
max_serialized_size_ThrusterCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: delta_p
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: delta_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rps_p
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rps_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ThrusterCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pass::msg::ThrusterCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ThrusterCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pass::msg::ThrusterCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ThrusterCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pass::msg::ThrusterCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ThrusterCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ThrusterCommand(full_bounded, 0);
}

static message_type_support_callbacks_t _ThrusterCommand__callbacks = {
  "pass::msg",
  "ThrusterCommand",
  _ThrusterCommand__cdr_serialize,
  _ThrusterCommand__cdr_deserialize,
  _ThrusterCommand__get_serialized_size,
  _ThrusterCommand__max_serialized_size
};

static rosidl_message_type_support_t _ThrusterCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ThrusterCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pass

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pass
const rosidl_message_type_support_t *
get_message_type_support_handle<pass::msg::ThrusterCommand>()
{
  return &pass::msg::typesupport_fastrtps_cpp::_ThrusterCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pass, msg, ThrusterCommand)() {
  return &pass::msg::typesupport_fastrtps_cpp::_ThrusterCommand__handle;
}

#ifdef __cplusplus
}
#endif
