// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from panda_move:msg/Predicate.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__MSG__DETAIL__PREDICATE__BUILDER_HPP_
#define PANDA_MOVE__MSG__DETAIL__PREDICATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "panda_move/msg/detail/predicate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace panda_move
{

namespace msg
{

namespace builder
{

class Init_Predicate_params
{
public:
  explicit Init_Predicate_params(::panda_move::msg::Predicate & msg)
  : msg_(msg)
  {}
  ::panda_move::msg::Predicate params(::panda_move::msg::Predicate::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::panda_move::msg::Predicate msg_;
};

class Init_Predicate_name
{
public:
  Init_Predicate_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Predicate_params name(::panda_move::msg::Predicate::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Predicate_params(msg_);
  }

private:
  ::panda_move::msg::Predicate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::panda_move::msg::Predicate>()
{
  return panda_move::msg::builder::Init_Predicate_name();
}

}  // namespace panda_move

#endif  // PANDA_MOVE__MSG__DETAIL__PREDICATE__BUILDER_HPP_
