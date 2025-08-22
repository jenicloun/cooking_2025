// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_tcp_endpoint:msg/RosUnitySrvMessage.idl
// generated code does not contain a copyright notice
#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `topic`
#include "rosidl_runtime_c/string_functions.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros_tcp_endpoint__msg__RosUnitySrvMessage__init(ros_tcp_endpoint__msg__RosUnitySrvMessage * msg)
{
  if (!msg) {
    return false;
  }
  // srv_id
  // is_request
  // topic
  if (!rosidl_runtime_c__String__init(&msg->topic)) {
    ros_tcp_endpoint__msg__RosUnitySrvMessage__fini(msg);
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->payload, 0)) {
    ros_tcp_endpoint__msg__RosUnitySrvMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros_tcp_endpoint__msg__RosUnitySrvMessage__fini(ros_tcp_endpoint__msg__RosUnitySrvMessage * msg)
{
  if (!msg) {
    return;
  }
  // srv_id
  // is_request
  // topic
  rosidl_runtime_c__String__fini(&msg->topic);
  // payload
  rosidl_runtime_c__uint8__Sequence__fini(&msg->payload);
}

bool
ros_tcp_endpoint__msg__RosUnitySrvMessage__are_equal(const ros_tcp_endpoint__msg__RosUnitySrvMessage * lhs, const ros_tcp_endpoint__msg__RosUnitySrvMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // srv_id
  if (lhs->srv_id != rhs->srv_id) {
    return false;
  }
  // is_request
  if (lhs->is_request != rhs->is_request) {
    return false;
  }
  // topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic), &(rhs->topic)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
ros_tcp_endpoint__msg__RosUnitySrvMessage__copy(
  const ros_tcp_endpoint__msg__RosUnitySrvMessage * input,
  ros_tcp_endpoint__msg__RosUnitySrvMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // srv_id
  output->srv_id = input->srv_id;
  // is_request
  output->is_request = input->is_request;
  // topic
  if (!rosidl_runtime_c__String__copy(
      &(input->topic), &(output->topic)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

ros_tcp_endpoint__msg__RosUnitySrvMessage *
ros_tcp_endpoint__msg__RosUnitySrvMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_tcp_endpoint__msg__RosUnitySrvMessage * msg = (ros_tcp_endpoint__msg__RosUnitySrvMessage *)allocator.allocate(sizeof(ros_tcp_endpoint__msg__RosUnitySrvMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_tcp_endpoint__msg__RosUnitySrvMessage));
  bool success = ros_tcp_endpoint__msg__RosUnitySrvMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_tcp_endpoint__msg__RosUnitySrvMessage__destroy(ros_tcp_endpoint__msg__RosUnitySrvMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_tcp_endpoint__msg__RosUnitySrvMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence__init(ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_tcp_endpoint__msg__RosUnitySrvMessage * data = NULL;

  if (size) {
    data = (ros_tcp_endpoint__msg__RosUnitySrvMessage *)allocator.zero_allocate(size, sizeof(ros_tcp_endpoint__msg__RosUnitySrvMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_tcp_endpoint__msg__RosUnitySrvMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_tcp_endpoint__msg__RosUnitySrvMessage__fini(&data[i - 1]);
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
ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence__fini(ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence * array)
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
      ros_tcp_endpoint__msg__RosUnitySrvMessage__fini(&array->data[i]);
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

ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence *
ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence * array = (ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence *)allocator.allocate(sizeof(ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence__destroy(ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence__are_equal(const ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence * lhs, const ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_tcp_endpoint__msg__RosUnitySrvMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence__copy(
  const ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence * input,
  ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_tcp_endpoint__msg__RosUnitySrvMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros_tcp_endpoint__msg__RosUnitySrvMessage * data =
      (ros_tcp_endpoint__msg__RosUnitySrvMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_tcp_endpoint__msg__RosUnitySrvMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros_tcp_endpoint__msg__RosUnitySrvMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_tcp_endpoint__msg__RosUnitySrvMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
