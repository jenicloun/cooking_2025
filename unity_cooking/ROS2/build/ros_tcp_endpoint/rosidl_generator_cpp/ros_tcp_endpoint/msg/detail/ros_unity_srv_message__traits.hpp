// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_tcp_endpoint:msg/RosUnitySrvMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SRV_MESSAGE__TRAITS_HPP_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SRV_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_tcp_endpoint
{

namespace msg
{

inline void to_flow_style_yaml(
  const RosUnitySrvMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: srv_id
  {
    out << "srv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.srv_id, out);
    out << ", ";
  }

  // member: is_request
  {
    out << "is_request: ";
    rosidl_generator_traits::value_to_yaml(msg.is_request, out);
    out << ", ";
  }

  // member: topic
  {
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << ", ";
  }

  // member: payload
  {
    if (msg.payload.size() == 0) {
      out << "payload: []";
    } else {
      out << "payload: [";
      size_t pending_items = msg.payload.size();
      for (auto item : msg.payload) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosUnitySrvMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: srv_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "srv_id: ";
    rosidl_generator_traits::value_to_yaml(msg.srv_id, out);
    out << "\n";
  }

  // member: is_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_request: ";
    rosidl_generator_traits::value_to_yaml(msg.is_request, out);
    out << "\n";
  }

  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << "\n";
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosUnitySrvMessage & msg, bool use_flow_style = false)
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
  const ros_tcp_endpoint::msg::RosUnitySrvMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_tcp_endpoint::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_tcp_endpoint::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_tcp_endpoint::msg::RosUnitySrvMessage & msg)
{
  return ros_tcp_endpoint::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_tcp_endpoint::msg::RosUnitySrvMessage>()
{
  return "ros_tcp_endpoint::msg::RosUnitySrvMessage";
}

template<>
inline const char * name<ros_tcp_endpoint::msg::RosUnitySrvMessage>()
{
  return "ros_tcp_endpoint/msg/RosUnitySrvMessage";
}

template<>
struct has_fixed_size<ros_tcp_endpoint::msg::RosUnitySrvMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_tcp_endpoint::msg::RosUnitySrvMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_tcp_endpoint::msg::RosUnitySrvMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SRV_MESSAGE__TRAITS_HPP_
