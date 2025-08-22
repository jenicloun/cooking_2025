// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_move:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__MSG__DETAIL__ACTION__TRAITS_HPP_
#define PANDA_MOVE__MSG__DETAIL__ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_move/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panda_move
{

namespace msg
{

inline void to_flow_style_yaml(
  const Action & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: params
  {
    if (msg.params.size() == 0) {
      out << "params: []";
    } else {
      out << "params: [";
      size_t pending_items = msg.params.size();
      for (auto item : msg.params) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Action & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.params.size() == 0) {
      out << "params: []\n";
    } else {
      out << "params:\n";
      for (auto item : msg.params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Action & msg, bool use_flow_style = false)
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
  const panda_move::msg::Action & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::msg::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::msg::Action & msg)
{
  return panda_move::msg::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::msg::Action>()
{
  return "panda_move::msg::Action";
}

template<>
inline const char * name<panda_move::msg::Action>()
{
  return "panda_move/msg/Action";
}

template<>
struct has_fixed_size<panda_move::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panda_move::msg::Action>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panda_move::msg::Action>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PANDA_MOVE__MSG__DETAIL__ACTION__TRAITS_HPP_
