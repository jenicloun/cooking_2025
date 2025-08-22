// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:srv/Plan.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__PLAN__BUILDER_HPP_
#define PANDA_MOVE__SRV__DETAIL__PLAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/srv/detail/plan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_Plan_Request_trajectories
{
public:
  Init_Plan_Request_trajectories()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::Plan_Request trajectories(::panda_move::srv::Plan_Request::_trajectories_type arg)
  {
    msg_.trajectories = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::Plan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::Plan_Request>()
{
  return panda_move::srv::builder::Init_Plan_Request_trajectories();
}

}  // namespace panda_move


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_Plan_Response_execute_state
{
public:
  Init_Plan_Response_execute_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::Plan_Response execute_state(::panda_move::srv::Plan_Response::_execute_state_type arg)
  {
    msg_.execute_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::Plan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::Plan_Response>()
{
  return panda_move::srv::builder::Init_Plan_Response_execute_state();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__PLAN__BUILDER_HPP_
