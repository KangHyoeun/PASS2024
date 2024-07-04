// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pass:msg/ThrusterCommand.idl
// generated code does not contain a copyright notice

#ifndef PASS__MSG__DETAIL__THRUSTER_COMMAND__STRUCT_H_
#define PASS__MSG__DETAIL__THRUSTER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ThrusterCommand in the package pass.
typedef struct pass__msg__ThrusterCommand
{
  double delta_p;
  double delta_s;
  double rps_p;
  double rps_s;
} pass__msg__ThrusterCommand;

// Struct for a sequence of pass__msg__ThrusterCommand.
typedef struct pass__msg__ThrusterCommand__Sequence
{
  pass__msg__ThrusterCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pass__msg__ThrusterCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PASS__MSG__DETAIL__THRUSTER_COMMAND__STRUCT_H_
