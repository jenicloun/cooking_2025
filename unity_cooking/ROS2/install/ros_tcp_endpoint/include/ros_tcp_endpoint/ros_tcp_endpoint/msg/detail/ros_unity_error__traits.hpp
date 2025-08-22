// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_tcp_endpoint:msg/RosUnityError.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__TRAITS_HPP_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_tcp_endpoint/msg/detail/ros_unity_error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_tcp_endpoint
{

namespace msg
{

inline void to_flow_style_yaml(
  const RosUnityError & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosUnityError & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosUnityError & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros_tcp_endpoint

namespace rosidl_generator_traits
{

[[deprecated("use ros_tcp_endpoint::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_tcp_endpoint::msg::RosUnityError & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_tcp_endpoint::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_tcp_endpoint::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_tcp_endpoint::msg::RosUnityError & msg)
{
  return ros_tcp_endpoint::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_tcp_endpoint::msg::RosUnityError>()
{
  return "ros_tcp_endpoint::msg::RosUnityError";
}

template<>
inline const char * name<ros_tcp_endpoint::msg::RosUnityError>()
{
  return "ros_tcp_endpoint/msg/RosUnityError";
}

template<>
struct has_fixed_size<ros_tcp_endpoint::msg::RosUnityError>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_tcp_endpoint::msg::RosUnityError>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_tcp_endpoint::msg::RosUnityError>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__TRAITS_HPP_
