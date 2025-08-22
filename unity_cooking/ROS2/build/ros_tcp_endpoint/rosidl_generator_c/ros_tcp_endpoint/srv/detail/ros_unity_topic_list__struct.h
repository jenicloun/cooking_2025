// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_tcp_endpoint:srv/RosUnityTopicList.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__STRUCT_H_
#define ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RosUnityTopicList in the package ros_tcp_endpoint.
typedef struct ros_tcp_endpoint__srv__RosUnityTopicList_Request
{
  uint8_t structure_needs_at_least_one_member;
} ros_tcp_endpoint__srv__RosUnityTopicList_Request;

// Struct for a sequence of ros_tcp_endpoint__srv__RosUnityTopicList_Request.
typedef struct ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence
{
  ros_tcp_endpoint__srv__RosUnityTopicList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'topics'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RosUnityTopicList in the package ros_tcp_endpoint.
typedef struct ros_tcp_endpoint__srv__RosUnityTopicList_Response
{
  rosidl_runtime_c__String__Sequence topics;
} ros_tcp_endpoint__srv__RosUnityTopicList_Response;

// Struct for a sequence of ros_tcp_endpoint__srv__RosUnityTopicList_Response.
typedef struct ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence
{
  ros_tcp_endpoint__srv__RosUnityTopicList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__STRUCT_H_
