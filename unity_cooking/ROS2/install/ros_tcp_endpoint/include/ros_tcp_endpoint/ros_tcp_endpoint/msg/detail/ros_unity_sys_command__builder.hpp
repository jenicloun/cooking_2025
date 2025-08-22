// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_tcp_endpoint:msg/RosUnitySysCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__BUILDER_HPP_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_tcp_endpoint/msg/detail/ros_unity_sys_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_tcp_endpoint
{

namespace msg
{

namespace builder
{

class Init_RosUnitySysCommand_params_json
{
public:
  explicit Init_RosUnitySysCommand_params_json(::ros_tcp_endpoint::msg::RosUnitySysCommand & msg)
  : msg_(msg)
  {}
  ::ros_tcp_endpoint::msg::RosUnitySysCommand params_json(::ros_tcp_endpoint::msg::RosUnitySysCommand::_params_json_type arg)
  {
    msg_.params_json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_tcp_endpoint::msg::RosUnitySysCommand msg_;
};

class Init_RosUnitySysCommand_command
{
public:
  Init_RosUnitySysCommand_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosUnitySysCommand_params_json command(::ros_tcp_endpoint::msg::RosUnitySysCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_RosUnitySysCommand_params_json(msg_);
  }

private:
  ::ros_tcp_endpoint::msg::RosUnitySysCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_tcp_endpoint::msg::RosUnitySysCommand>()
{
  return ros_tcp_endpoint::msg::builder::Init_RosUnitySysCommand_command();
}

}  // namespace ros_tcp_endpoint

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__BUILDER_HPP_
