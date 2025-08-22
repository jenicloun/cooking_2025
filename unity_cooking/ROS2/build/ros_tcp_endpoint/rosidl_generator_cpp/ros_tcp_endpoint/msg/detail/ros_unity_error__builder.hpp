// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_tcp_endpoint:msg/RosUnityError.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__BUILDER_HPP_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_tcp_endpoint/msg/detail/ros_unity_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_tcp_endpoint
{

namespace msg
{

namespace builder
{

class Init_RosUnityError_message
{
public:
  Init_RosUnityError_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_tcp_endpoint::msg::RosUnityError message(::ros_tcp_endpoint::msg::RosUnityError::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_tcp_endpoint::msg::RosUnityError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_tcp_endpoint::msg::RosUnityError>()
{
  return ros_tcp_endpoint::msg::builder::Init_RosUnityError_message();
}

}  // namespace ros_tcp_endpoint

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__BUILDER_HPP_
