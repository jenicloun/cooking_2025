// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:srv/Sync.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__SYNC__BUILDER_HPP_
#define PANDA_MOVE__SRV__DETAIL__SYNC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/srv/detail/sync__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_Sync_Request_activated_object
{
public:
  Init_Sync_Request_activated_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::Sync_Request activated_object(::panda_move::srv::Sync_Request::_activated_object_type arg)
  {
    msg_.activated_object = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::Sync_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::Sync_Request>()
{
  return panda_move::srv::builder::Init_Sync_Request_activated_object();
}

}  // namespace panda_move


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_Sync_Response_joint_state
{
public:
  explicit Init_Sync_Response_joint_state(::panda_move::srv::Sync_Response & msg)
  : msg_(msg)
  {}
  ::panda_move::srv::Sync_Response joint_state(::panda_move::srv::Sync_Response::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::Sync_Response msg_;
};

class Init_Sync_Response_orientation
{
public:
  explicit Init_Sync_Response_orientation(::panda_move::srv::Sync_Response & msg)
  : msg_(msg)
  {}
  Init_Sync_Response_joint_state orientation(::panda_move::srv::Sync_Response::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Sync_Response_joint_state(msg_);
  }

private:
  ::panda_move::srv::Sync_Response msg_;
};

class Init_Sync_Response_position
{
public:
  explicit Init_Sync_Response_position(::panda_move::srv::Sync_Response & msg)
  : msg_(msg)
  {}
  Init_Sync_Response_orientation position(::panda_move::srv::Sync_Response::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Sync_Response_orientation(msg_);
  }

private:
  ::panda_move::srv::Sync_Response msg_;
};

class Init_Sync_Response_object_name
{
public:
  Init_Sync_Response_object_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sync_Response_position object_name(::panda_move::srv::Sync_Response::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return Init_Sync_Response_position(msg_);
  }

private:
  ::panda_move::srv::Sync_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::Sync_Response>()
{
  return panda_move::srv::builder::Init_Sync_Response_object_name();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__SYNC__BUILDER_HPP_
