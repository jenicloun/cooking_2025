// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_tcp_endpoint:msg/RosUnitySrvMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SRV_MESSAGE__STRUCT_H_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SRV_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic'
#include "rosidl_runtime_c/string.h"
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RosUnitySrvMessage in the package ros_tcp_endpoint.
typedef struct ros_tcp_endpoint__msg__RosUnitySrvMessage
{
  int32_t srv_id;
  bool is_request;
  rosidl_runtime_c__String topic;
  rosidl_runtime_c__uint8__Sequence payload;
} ros_tcp_endpoint__msg__RosUnitySrvMessage;

// Struct for a sequence of ros_tcp_endpoint__msg__RosUnitySrvMessage.
typedef struct ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence
{
  ros_tcp_endpoint__msg__RosUnitySrvMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_tcp_endpoint__msg__RosUnitySrvMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SRV_MESSAGE__STRUCT_H_
