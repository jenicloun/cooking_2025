// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_tcp_endpoint:srv/RosUnityTopicList.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__BUILDER_HPP_
#define ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_tcp_endpoint/srv/detail/ros_unity_topic_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_tcp_endpoint
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_tcp_endpoint::srv::RosUnityTopicList_Request>()
{
  return ::ros_tcp_endpoint::srv::RosUnityTopicList_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ros_tcp_endpoint


namespace ros_tcp_endpoint
{

namespace srv
{

namespace builder
{

class Init_RosUnityTopicList_Response_topics
{
public:
  Init_RosUnityTopicList_Response_topics()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_tcp_endpoint::srv::RosUnityTopicList_Response topics(::ros_tcp_endpoint::srv::RosUnityTopicList_Response::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_tcp_endpoint::srv::RosUnityTopicList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_tcp_endpoint::srv::RosUnityTopicList_Response>()
{
  return ros_tcp_endpoint::srv::builder::Init_RosUnityTopicList_Response_topics();
}

}  // namespace ros_tcp_endpoint

#endif  // ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__BUILDER_HPP_
