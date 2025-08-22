// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_tcp_endpoint:msg/RosUnitySysCommand.idl
// generated code does not contain a copyright notice
#include "ros_tcp_endpoint/msg/detail/ros_unity_sys_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
// Member `params_json`
#include "rosidl_runtime_c/string_functions.h"

bool
ros_tcp_endpoint__msg__RosUnitySysCommand__init(ros_tcp_endpoint__msg__RosUnitySysCommand * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    ros_tcp_endpoint__msg__RosUnitySysCommand__fini(msg);
    return false;
  }
  // params_json
  if (!rosidl_runtime_c__String__init(&msg->params_json)) {
    ros_tcp_endpoint__msg__RosUnitySysCommand__fini(msg);
    return false;
  }
  return true;
}

void
ros_tcp_endpoint__msg__RosUnitySysCommand__fini(ros_tcp_endpoint__msg__RosUnitySysCommand * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // params_json
  rosidl_runtime_c__String__fini(&msg->params_json);
}

bool
ros_tcp_endpoint__msg__RosUnitySysCommand__are_equal(const ros_tcp_endpoint__msg__RosUnitySysCommand * lhs, const ros_tcp_endpoint__msg__RosUnitySysCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // params_json
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->params_json), &(rhs->params_json)))
  {
    return false;
  }
  return true;
}

bool
ros_tcp_endpoint__msg__RosUnitySysCommand__copy(
  const ros_tcp_endpoint__msg__RosUnitySysCommand * input,
  ros_tcp_endpoint__msg__RosUnitySysCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // params_json
  if (!rosidl_runtime_c__String__copy(
      &(input->params_json), &(output->params_json)))
  {
    return false;
  }
  return true;
}

ros_tcp_endpoint__msg__RosUnitySysCommand *
ros_tcp_endpoint__msg__RosUnitySysCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_tcp_endpoint__msg__RosUnitySysCommand * msg = (ros_tcp_endpoint__msg__RosUnitySysCommand *)allocator.allocate(sizeof(ros_tcp_endpoint__msg__RosUnitySysCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_tcp_endpoint__msg__RosUnitySysCommand));
  bool success = ros_tcp_endpoint__msg__RosUnitySysCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_tcp_endpoint__msg__RosUnitySysCommand__destroy(ros_tcp_endpoint__msg__RosUnitySysCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_tcp_endpoint__msg__RosUnitySysCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence__init(ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_tcp_endpoint__msg__RosUnitySysCommand * data = NULL;

  if (size) {
    data = (ros_tcp_endpoint__msg__RosUnitySysCommand *)allocator.zero_allocate(size, sizeof(ros_tcp_endpoint__msg__RosUnitySysCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_tcp_endpoint__msg__RosUnitySysCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_tcp_endpoint__msg__RosUnitySysCommand__fini(&data[i - 1]);
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
ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence__fini(ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence * array)
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
      ros_tcp_endpoint__msg__RosUnitySysCommand__fini(&array->data[i]);
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

ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence *
ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence * array = (ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence *)allocator.allocate(sizeof(ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence__destroy(ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence__are_equal(const ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence * lhs, const ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_tcp_endpoint__msg__RosUnitySysCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence__copy(
  const ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence * input,
  ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_tcp_endpoint__msg__RosUnitySysCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_tcp_endpoint__msg__RosUnitySysCommand * data =
      (ros_tcp_endpoint__msg__RosUnitySysCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_tcp_endpoint__msg__RosUnitySysCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_tcp_endpoint__msg__RosUnitySysCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_tcp_endpoint__msg__RosUnitySysCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
