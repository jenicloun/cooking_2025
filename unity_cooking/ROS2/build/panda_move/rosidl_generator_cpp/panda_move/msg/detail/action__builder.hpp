// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__MSG__DETAIL__ACTION__BUILDER_HPP_
#define PANDA_MOVE__MSG__DETAIL__ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace msg
{

namespace builder
{

class Init_Action_params
{
public:
  explicit Init_Action_params(::panda_move::msg::Action & msg)
  : msg_(msg)
  {}
  ::panda_move::msg::Action params(::panda_move::msg::Action::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::msg::Action msg_;
};

class Init_Action_name
{
public:
  Init_Action_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_params name(::panda_move::msg::Action::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Action_params(msg_);
  }

private:
  ::panda_move::msg::Action msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::msg::Action>()
{
  return panda_move::msg::builder::Init_Action_name();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__MSG__DETAIL__ACTION__BUILDER_HPP_
