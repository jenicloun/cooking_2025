// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_move:msg/ExecutionCheck.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__TRAITS_HPP_
#define PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_move/msg/detail/execution_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panda_move
{

namespace msg
{

inline void to_flow_style_yaml(
  const ExecutionCheck & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecutionCheck & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecutionCheck & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace panda_move

namespace rosidl_generator_traits
{

[[deprecated("use panda_move::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_move::msg::ExecutionCheck & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::msg::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::msg::ExecutionCheck & msg)
{
  return panda_move::msg::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::msg::ExecutionCheck>()
{
  return "panda_move::msg::ExecutionCheck";
}

template<>
inline const char * name<panda_move::msg::ExecutionCheck>()
{
  return "panda_move/msg/ExecutionCheck";
}

template<>
struct has_fixed_size<panda_move::msg::ExecutionCheck>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panda_move::msg::ExecutionCheck>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panda_move::msg::ExecutionCheck>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PANDA_MOVE__MSG__DETAIL__EXECUTION_CHECK__TRAITS_HPP_
