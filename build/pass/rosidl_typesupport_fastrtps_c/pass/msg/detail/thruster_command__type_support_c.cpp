// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from pass:msg/ThrusterCommand.idl
// generated code does not contain a copyright notice
#include "pass/msg/detail/thruster_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "pass/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "pass/msg/detail/thruster_command__struct.h"
#include "pass/msg/detail/thruster_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ThrusterCommand__ros_msg_type = pass__msg__ThrusterCommand;

static bool _ThrusterCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ThrusterCommand__ros_msg_type * ros_message = static_cast<const _ThrusterCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: delta_p
  {
    cdr << ros_message->delta_p;
  }

  // Field name: delta_s
  {
    cdr << ros_message->delta_s;
  }

  // Field name: rps_p
  {
    cdr << ros_message->rps_p;
  }

  // Field name: rps_s
  {
    cdr << ros_message->rps_s;
  }

  return true;
}

static bool _ThrusterCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ThrusterCommand__ros_msg_type * ros_message = static_cast<_ThrusterCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: delta_p
  {
    cdr >> ros_message->delta_p;
  }

  // Field name: delta_s
  {
    cdr >> ros_message->delta_s;
  }

  // Field name: rps_p
  {
    cdr >> ros_message->rps_p;
  }

  // Field name: rps_s
  {
    cdr >> ros_message->rps_s;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pass
size_t get_serialized_size_pass__msg__ThrusterCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ThrusterCommand__ros_msg_type * ros_message = static_cast<const _ThrusterCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name delta_p
  {
    size_t item_size = sizeof(ros_message->delta_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_s
  {
    size_t item_size = sizeof(ros_message->delta_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rps_p
  {
    size_t item_size = sizeof(ros_message->rps_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rps_s
  {
    size_t item_size = sizeof(ros_message->rps_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ThrusterCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_pass__msg__ThrusterCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_pass
size_t max_serialized_size_pass__msg__ThrusterCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: delta_p
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: delta_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rps_p
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rps_s
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ThrusterCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_pass__msg__ThrusterCommand(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ThrusterCommand = {
  "pass::msg",
  "ThrusterCommand",
  _ThrusterCommand__cdr_serialize,
  _ThrusterCommand__cdr_deserialize,
  _ThrusterCommand__get_serialized_size,
  _ThrusterCommand__max_serialized_size
};

static rosidl_message_type_support_t _ThrusterCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ThrusterCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pass, msg, ThrusterCommand)() {
  return &_ThrusterCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
