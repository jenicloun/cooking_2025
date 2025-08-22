// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_tcp_endpoint:msg/RosUnitySysCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__STRUCT_H_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
// Member 'params_json'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RosUnitySysCommand in the package ros_tcp_endpoint.
typedef struct ros_tcp_endpoint__msg__RosUnitySysCommand
{
  rosidl_runtime_c__String command;
  rosidl_runtime_c__String params_json;
} ros_tcp_endpoint__msg__RosUnitySysCommand;

// Struct for a sequence of ros_tcp_endpoint__msg__RosUnitySysCommand.
typedef struct ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence
{
  ros_tcp_endpoint__msg__RosUnitySysCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_tcp_endpoint__msg__RosUnitySysCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__STRUCT_H_
