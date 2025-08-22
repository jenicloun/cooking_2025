// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:srv/MotionCheck.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__BUILDER_HPP_
#define PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/srv/detail/motion_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_MotionCheck_Request_object_2
{
public:
  explicit Init_MotionCheck_Request_object_2(::panda_move::srv::MotionCheck_Request & msg)
  : msg_(msg)
  {}
  ::panda_move::srv::MotionCheck_Request object_2(::panda_move::srv::MotionCheck_Request::_object_2_type arg)
  {
    msg_.object_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::MotionCheck_Request msg_;
};

class Init_MotionCheck_Request_object_1
{
public:
  explicit Init_MotionCheck_Request_object_1(::panda_move::srv::MotionCheck_Request & msg)
  : msg_(msg)
  {}
  Init_MotionCheck_Request_object_2 object_1(::panda_move::srv::MotionCheck_Request::_object_1_type arg)
  {
    msg_.object_1 = std::move(arg);
    return Init_MotionCheck_Request_object_2(msg_);
  }

private:
  ::panda_move::srv::MotionCheck_Request msg_;
};

class Init_MotionCheck_Request_motion_type
{
public:
  Init_MotionCheck_Request_motion_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotionCheck_Request_object_1 motion_type(::panda_move::srv::MotionCheck_Request::_motion_type_type arg)
  {
    msg_.motion_type = std::move(arg);
    return Init_MotionCheck_Request_object_1(msg_);
  }

private:
  ::panda_move::srv::MotionCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::MotionCheck_Request>()
{
  return panda_move::srv::builder::Init_MotionCheck_Request_motion_type();
}

}  // namespace panda_move


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_MotionCheck_Response_execute_state
{
public:
  Init_MotionCheck_Response_execute_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::MotionCheck_Response execute_state(::panda_move::srv::MotionCheck_Response::_execute_state_type arg)
  {
    msg_.execute_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::MotionCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::MotionCheck_Response>()
{
  return panda_move::srv::builder::Init_MotionCheck_Response_execute_state();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__BUILDER_HPP_
