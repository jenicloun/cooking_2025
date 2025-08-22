// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_tcp_endpoint:msg/RosUnitySysCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__TRAITS_HPP_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_tcp_endpoint/msg/detail/ros_unity_sys_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_tcp_endpoint
{

namespace msg
{

inline void to_flow_style_yaml(
  const RosUnitySysCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: params_json
  {
    out << "params_json: ";
    rosidl_generator_traits::value_to_yaml(msg.params_json, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosUnitySysCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: params_json
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "params_json: ";
    rosidl_generator_traits::value_to_yaml(msg.params_json, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosUnitySysCommand & msg, bool use_flow_style = false)
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
  const ros_tcp_endpoint::msg::RosUnitySysCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_tcp_endpoint::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_tcp_endpoint::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_tcp_endpoint::msg::RosUnitySysCommand & msg)
{
  return ros_tcp_endpoint::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_tcp_endpoint::msg::RosUnitySysCommand>()
{
  return "ros_tcp_endpoint::msg::RosUnitySysCommand";
}

template<>
inline const char * name<ros_tcp_endpoint::msg::RosUnitySysCommand>()
{
  return "ros_tcp_endpoint/msg/RosUnitySysCommand";
}

template<>
struct has_fixed_size<ros_tcp_endpoint::msg::RosUnitySysCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_tcp_endpoint::msg::RosUnitySysCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_tcp_endpoint::msg::RosUnitySysCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__TRAITS_HPP_
