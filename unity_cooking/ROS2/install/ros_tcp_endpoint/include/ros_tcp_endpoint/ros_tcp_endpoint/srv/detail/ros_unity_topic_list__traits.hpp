// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_tcp_endpoint:srv/RosUnityTopicList.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__TRAITS_HPP_
#define ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_tcp_endpoint/srv/detail/ros_unity_topic_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_tcp_endpoint
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosUnityTopicList_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosUnityTopicList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosUnityTopicList_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_tcp_endpoint

namespace rosidl_generator_traits
{

[[deprecated("use ros_tcp_endpoint::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_tcp_endpoint::srv::RosUnityTopicList_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_tcp_endpoint::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_tcp_endpoint::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_tcp_endpoint::srv::RosUnityTopicList_Request & msg)
{
  return ros_tcp_endpoint::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_tcp_endpoint::srv::RosUnityTopicList_Request>()
{
  return "ros_tcp_endpoint::srv::RosUnityTopicList_Request";
}

template<>
inline const char * name<ros_tcp_endpoint::srv::RosUnityTopicList_Request>()
{
  return "ros_tcp_endpoint/srv/RosUnityTopicList_Request";
}

template<>
struct has_fixed_size<ros_tcp_endpoint::srv::RosUnityTopicList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_tcp_endpoint::srv::RosUnityTopicList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_tcp_endpoint::srv::RosUnityTopicList_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_tcp_endpoint
{

namespace srv
{

inline void to_flow_style_yaml(
  const RosUnityTopicList_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: topics
  {
    if (msg.topics.size() == 0) {
      out << "topics: []";
    } else {
      out << "topics: [";
      size_t pending_items = msg.topics.size();
      for (auto item : msg.topics) {
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
  const RosUnityTopicList_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topics.size() == 0) {
      out << "topics: []\n";
    } else {
      out << "topics:\n";
      for (auto item : msg.topics) {
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

inline std::string to_yaml(const RosUnityTopicList_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_tcp_endpoint

namespace rosidl_generator_traits
{

[[deprecated("use ros_tcp_endpoint::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_tcp_endpoint::srv::RosUnityTopicList_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_tcp_endpoint::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_tcp_endpoint::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_tcp_endpoint::srv::RosUnityTopicList_Response & msg)
{
  return ros_tcp_endpoint::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_tcp_endpoint::srv::RosUnityTopicList_Response>()
{
  return "ros_tcp_endpoint::srv::RosUnityTopicList_Response";
}

template<>
inline const char * name<ros_tcp_endpoint::srv::RosUnityTopicList_Response>()
{
  return "ros_tcp_endpoint/srv/RosUnityTopicList_Response";
}

template<>
struct has_fixed_size<ros_tcp_endpoint::srv::RosUnityTopicList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_tcp_endpoint::srv::RosUnityTopicList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_tcp_endpoint::srv::RosUnityTopicList_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_tcp_endpoint::srv::RosUnityTopicList>()
{
  return "ros_tcp_endpoint::srv::RosUnityTopicList";
}

template<>
inline const char * name<ros_tcp_endpoint::srv::RosUnityTopicList>()
{
  return "ros_tcp_endpoint/srv/RosUnityTopicList";
}

template<>
struct has_fixed_size<ros_tcp_endpoint::srv::RosUnityTopicList>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_tcp_endpoint::srv::RosUnityTopicList_Request>::value &&
    has_fixed_size<ros_tcp_endpoint::srv::RosUnityTopicList_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_tcp_endpoint::srv::RosUnityTopicList>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_tcp_endpoint::srv::RosUnityTopicList_Request>::value &&
    has_bounded_size<ros_tcp_endpoint::srv::RosUnityTopicList_Response>::value
  >
{
};

template<>
struct is_service<ros_tcp_endpoint::srv::RosUnityTopicList>
  : std::true_type
{
};

template<>
struct is_service_request<ros_tcp_endpoint::srv::RosUnityTopicList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_tcp_endpoint::srv::RosUnityTopicList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__TRAITS_HPP_
