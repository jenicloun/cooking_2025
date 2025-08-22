// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ros_tcp_endpoint:msg/RosUnityError.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_tcp_endpoint/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ros_tcp_endpoint/msg/detail/ros_unity_error__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace ros_tcp_endpoint
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_tcp_endpoint
cdr_serialize(
  const ros_tcp_endpoint::msg::RosUnityError & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_tcp_endpoint
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros_tcp_endpoint::msg::RosUnityError & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_tcp_endpoint
get_serialized_size(
  const ros_tcp_endpoint::msg::RosUnityError & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_tcp_endpoint
max_serialized_size_RosUnityError(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros_tcp_endpoint

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros_tcp_endpoint
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros_tcp_endpoint, msg, RosUnityError)();

#ifdef __cplusplus
}
#endif

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
