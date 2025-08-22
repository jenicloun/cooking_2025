// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:srv/ActionSequences.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__BUILDER_HPP_
#define PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/srv/detail/action_sequences__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_ActionSequences_Request_action_sequences
{
public:
  Init_ActionSequences_Request_action_sequences()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::ActionSequences_Request action_sequences(::panda_move::srv::ActionSequences_Request::_action_sequences_type arg)
  {
    msg_.action_sequences = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::ActionSequences_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::ActionSequences_Request>()
{
  return panda_move::srv::builder::Init_ActionSequences_Request_action_sequences();
}

}  // namespace panda_move


namespace panda_move
{

namespace srv
{

namespace builder
{

class Init_ActionSequences_Response_result
{
public:
  Init_ActionSequences_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::srv::ActionSequences_Response result(::panda_move::srv::ActionSequences_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::srv::ActionSequences_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::srv::ActionSequences_Response>()
{
  return panda_move::srv::builder::Init_ActionSequences_Response_result();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__BUILDER_HPP_
