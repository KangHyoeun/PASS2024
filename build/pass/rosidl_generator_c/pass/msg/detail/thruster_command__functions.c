// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pass:msg/ThrusterCommand.idl
// generated code does not contain a copyright notice
#include "pass/msg/detail/thruster_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
pass__msg__ThrusterCommand__init(pass__msg__ThrusterCommand * msg)
{
  if (!msg) {
    return false;
  }
  // delta_p
  // delta_s
  // rps_p
  // rps_s
  return true;
}

void
pass__msg__ThrusterCommand__fini(pass__msg__ThrusterCommand * msg)
{
  if (!msg) {
    return;
  }
  // delta_p
  // delta_s
  // rps_p
  // rps_s
}

bool
pass__msg__ThrusterCommand__are_equal(const pass__msg__ThrusterCommand * lhs, const pass__msg__ThrusterCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // delta_p
  if (lhs->delta_p != rhs->delta_p) {
    return false;
  }
  // delta_s
  if (lhs->delta_s != rhs->delta_s) {
    return false;
  }
  // rps_p
  if (lhs->rps_p != rhs->rps_p) {
    return false;
  }
  // rps_s
  if (lhs->rps_s != rhs->rps_s) {
    return false;
  }
  return true;
}

bool
pass__msg__ThrusterCommand__copy(
  const pass__msg__ThrusterCommand * input,
  pass__msg__ThrusterCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // delta_p
  output->delta_p = input->delta_p;
  // delta_s
  output->delta_s = input->delta_s;
  // rps_p
  output->rps_p = input->rps_p;
  // rps_s
  output->rps_s = input->rps_s;
  return true;
}

pass__msg__ThrusterCommand *
pass__msg__ThrusterCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pass__msg__ThrusterCommand * msg = (pass__msg__ThrusterCommand *)allocator.allocate(sizeof(pass__msg__ThrusterCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pass__msg__ThrusterCommand));
  bool success = pass__msg__ThrusterCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pass__msg__ThrusterCommand__destroy(pass__msg__ThrusterCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pass__msg__ThrusterCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pass__msg__ThrusterCommand__Sequence__init(pass__msg__ThrusterCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pass__msg__ThrusterCommand * data = NULL;

  if (size) {
    data = (pass__msg__ThrusterCommand *)allocator.zero_allocate(size, sizeof(pass__msg__ThrusterCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pass__msg__ThrusterCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pass__msg__ThrusterCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pass__msg__ThrusterCommand__Sequence__fini(pass__msg__ThrusterCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pass__msg__ThrusterCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pass__msg__ThrusterCommand__Sequence *
pass__msg__ThrusterCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pass__msg__ThrusterCommand__Sequence * array = (pass__msg__ThrusterCommand__Sequence *)allocator.allocate(sizeof(pass__msg__ThrusterCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pass__msg__ThrusterCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pass__msg__ThrusterCommand__Sequence__destroy(pass__msg__ThrusterCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pass__msg__ThrusterCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pass__msg__ThrusterCommand__Sequence__are_equal(const pass__msg__ThrusterCommand__Sequence * lhs, const pass__msg__ThrusterCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pass__msg__ThrusterCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pass__msg__ThrusterCommand__Sequence__copy(
  const pass__msg__ThrusterCommand__Sequence * input,
  pass__msg__ThrusterCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pass__msg__ThrusterCommand);
    pass__msg__ThrusterCommand * data =
      (pass__msg__ThrusterCommand *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pass__msg__ThrusterCommand__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          pass__msg__ThrusterCommand__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pass__msg__ThrusterCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
