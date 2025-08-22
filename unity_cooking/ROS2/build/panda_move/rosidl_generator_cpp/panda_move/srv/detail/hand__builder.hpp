// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:srv/Hand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__HAND__BUILDER_HPP_
#define PANDA_MOVE__SRV__DETAIL__HAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/srv/detail/hand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_Hand_Request_grasp_size
{
public:
  explicit Init_Hand_Request_grasp_size(::panda_move::srv::Hand_Request & msg)
  : msg_(msg)
  {}
  ::panda_move::srv::Hand_Request grasp_size(::panda_move::srv::Hand_Request::_grasp_size_type arg)
  {
    msg_.grasp_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::Hand_Request msg_;
};

class Init_Hand_Request_object_name
{
public:
  explicit Init_Hand_Request_object_name(::panda_move::srv::Hand_Request & msg)
  : msg_(msg)
  {}
  Init_Hand_Request_grasp_size object_name(::panda_move::srv::Hand_Request::_object_name_type arg)
  {
    msg_.object_name = std::move(arg);
    return Init_Hand_Request_grasp_size(msg_);
  }

private:
  ::panda_move::srv::Hand_Request msg_;
};

class Init_Hand_Request_grasp_state
{
public:
  Init_Hand_Request_grasp_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Hand_Request_object_name grasp_state(::panda_move::srv::Hand_Request::_grasp_state_type arg)
  {
    msg_.grasp_state = std::move(arg);
    return Init_Hand_Request_object_name(msg_);
  }

private:
  ::panda_move::srv::Hand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::Hand_Request>()
{
  return panda_move::srv::builder::Init_Hand_Request_grasp_state();
}

}  // namespace panda_move


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_Hand_Response_execute_state
{
public:
  Init_Hand_Response_execute_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::Hand_Response execute_state(::panda_move::srv::Hand_Response::_execute_state_type arg)
  {
    msg_.execute_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::Hand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::Hand_Response>()
{
  return panda_move::srv::builder::Init_Hand_Response_execute_state();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__HAND__BUILDER_HPP_
