// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:srv/NewState.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__NEW_STATE__BUILDER_HPP_
#define PANDA_MOVE__SRV__DETAIL__NEW_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/srv/detail/new_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_NewState_Request_new_state
{
public:
  Init_NewState_Request_new_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::NewState_Request new_state(::panda_move::srv::NewState_Request::_new_state_type arg)
  {
    msg_.new_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::NewState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::NewState_Request>()
{
  return panda_move::srv::builder::Init_NewState_Request_new_state();
}

}  // namespace panda_move


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_NewState_Response_result
{
public:
  Init_NewState_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::NewState_Response result(::panda_move::srv::NewState_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::NewState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::NewState_Response>()
{
  return panda_move::srv::builder::Init_NewState_Response_result();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__NEW_STATE__BUILDER_HPP_
