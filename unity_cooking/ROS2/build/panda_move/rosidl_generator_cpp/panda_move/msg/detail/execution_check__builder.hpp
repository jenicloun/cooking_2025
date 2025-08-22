// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:msg/ExecutionCheck.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__BUILDER_HPP_
#define PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/msg/detail/execution_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace msg
{

namespace builder
{

class Init_ExecutionCheck_status
{
public:
  Init_ExecutionCheck_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::panda_move::msg::ExecutionCheck status(::panda_move::msg::ExecutionCheck::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::msg::ExecutionCheck msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::msg::ExecutionCheck>()
{
  return panda_move::msg::builder::Init_ExecutionCheck_status();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__BUILDER_HPP_
