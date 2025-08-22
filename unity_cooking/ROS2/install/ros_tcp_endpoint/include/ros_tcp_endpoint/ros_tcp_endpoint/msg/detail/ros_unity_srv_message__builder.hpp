// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_tcp_endpoint:msg/RosUnitySrvMessage.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SRV_MESSAGE__BUILDER_HPP_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SRV_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_tcp_endpoint
{

namespace msg
{

namespace builder
{

class Init_RosUnitySrvMessage_payload
{
public:
  explicit Init_RosUnitySrvMessage_payload(::ros_tcp_endpoint::msg::RosUnitySrvMessage & msg)
  : msg_(msg)
  {}
  ::ros_tcp_endpoint::msg::RosUnitySrvMessage payload(::ros_tcp_endpoint::msg::RosUnitySrvMessage::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_tcp_endpoint::msg::RosUnitySrvMessage msg_;
};

class Init_RosUnitySrvMessage_topic
{
public:
  explicit Init_RosUnitySrvMessage_topic(::ros_tcp_endpoint::msg::RosUnitySrvMessage & msg)
  : msg_(msg)
  {}
  Init_RosUnitySrvMessage_payload topic(::ros_tcp_endpoint::msg::RosUnitySrvMessage::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_RosUnitySrvMessage_payload(msg_);
  }

private:
  ::ros_tcp_endpoint::msg::RosUnitySrvMessage msg_;
};

class Init_RosUnitySrvMessage_is_request
{
public:
  explicit Init_RosUnitySrvMessage_is_request(::ros_tcp_endpoint::msg::RosUnitySrvMessage & msg)
  : msg_(msg)
  {}
  Init_RosUnitySrvMessage_topic is_request(::ros_tcp_endpoint::msg::RosUnitySrvMessage::_is_request_type arg)
  {
    msg_.is_request = std::move(arg);
    return Init_RosUnitySrvMessage_topic(msg_);
  }

private:
  ::ros_tcp_endpoint::msg::RosUnitySrvMessage msg_;
};

class Init_RosUnitySrvMessage_srv_id
{
public:
  Init_RosUnitySrvMessage_srv_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosUnitySrvMessage_is_request srv_id(::ros_tcp_endpoint::msg::RosUnitySrvMessage::_srv_id_type arg)
  {
    msg_.srv_id = std::move(arg);
    return Init_RosUnitySrvMessage_is_request(msg_);
  }

private:
  ::ros_tcp_endpoint::msg::RosUnitySrvMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_tcp_endpoint::msg::RosUnitySrvMessage>()
{
  return ros_tcp_endpoint::msg::builder::Init_RosUnitySrvMessage_srv_id();
}

}  // namespace ros_tcp_endpoint

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SRV_MESSAGE__BUILDER_HPP_
