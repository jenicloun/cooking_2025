// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:srv/Init.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__INIT__BUILDER_HPP_
#define PANDA_MOVE__SRV__DETAIL__INIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/srv/detail/init__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_Init_Request_joint_state
{
public:
  explicit Init_Init_Request_joint_state(::panda_move::srv::Init_Request & msg)
  : msg_(msg)
  {}
  ::panda_move::srv::Init_Request joint_state(::panda_move::srv::Init_Request::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::Init_Request msg_;
};

class Init_Init_Request_scale
{
public:
  explicit Init_Init_Request_scale(::panda_move::srv::Init_Request & msg)
  : msg_(msg)
  {}
  Init_Init_Request_joint_state scale(::panda_move::srv::Init_Request::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_Init_Request_joint_state(msg_);
  }

private:
  ::panda_move::srv::Init_Request msg_;
};

class Init_Init_Request_orientation
{
public:
  explicit Init_Init_Request_orientation(::panda_move::srv::Init_Request & msg)
  : msg_(msg)
  {}
  Init_Init_Request_scale orientation(::panda_move::srv::Init_Request::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Init_Request_scale(msg_);
  }

private:
  ::panda_move::srv::Init_Request msg_;
};

class Init_Init_Request_position
{
public:
  explicit Init_Init_Request_position(::panda_move::srv::Init_Request & msg)
  : msg_(msg)
  {}
  Init_Init_Request_orientation position(::panda_move::srv::Init_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Init_Request_orientation(msg_);
  }

private:
  ::panda_move::srv::Init_Request msg_;
};

class Init_Init_Request_activated_object
{
public:
  Init_Init_Request_activated_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Init_Request_position activated_object(::panda_move::srv::Init_Request::_activated_object_type arg)
  {
    msg_.activated_object = std::move(arg);
    return Init_Init_Request_position(msg_);
  }

private:
  ::panda_move::srv::Init_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::Init_Request>()
{
  return panda_move::srv::builder::Init_Init_Request_activated_object();
}

}  // namespace panda_move


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_Init_Response_init_state
{
public:
  Init_Init_Response_init_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::Init_Response init_state(::panda_move::srv::Init_Response::_init_state_type arg)
  {
    msg_.init_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::Init_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::Init_Response>()
{
  return panda_move::srv::builder::Init_Init_Response_init_state();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__INIT__BUILDER_HPP_
