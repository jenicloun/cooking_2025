// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_move:srv/ActionSequences.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__TRAITS_HPP_
#define PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_move/srv/detail/action_sequences__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'action_sequences'
#include "panda_move/msg/detail/action__traits.hpp"

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActionSequences_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: action_sequences
  {
    if (msg.action_sequences.size() == 0) {
      out << "action_sequences: []";
    } else {
      out << "action_sequences: [";
      size_t pending_items = msg.action_sequences.size();
      for (auto item : msg.action_sequences) {
        to_flow_style_yaml(item, out);
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
  const ActionSequences_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action_sequences
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.action_sequences.size() == 0) {
      out << "action_sequences: []\n";
    } else {
      out << "action_sequences:\n";
      for (auto item : msg.action_sequences) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionSequences_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace panda_move

namespace rosidl_generator_traits
{

[[deprecated("use panda_move::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_move::srv::ActionSequences_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::ActionSequences_Request & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::ActionSequences_Request>()
{
  return "panda_move::srv::ActionSequences_Request";
}

template<>
inline const char * name<panda_move::srv::ActionSequences_Request>()
{
  return "panda_move/srv/ActionSequences_Request";
}

template<>
struct has_fixed_size<panda_move::srv::ActionSequences_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panda_move::srv::ActionSequences_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panda_move::srv::ActionSequences_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const ActionSequences_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ActionSequences_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ActionSequences_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace panda_move

namespace rosidl_generator_traits
{

[[deprecated("use panda_move::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const panda_move::srv::ActionSequences_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::ActionSequences_Response & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::ActionSequences_Response>()
{
  return "panda_move::srv::ActionSequences_Response";
}

template<>
inline const char * name<panda_move::srv::ActionSequences_Response>()
{
  return "panda_move/srv/ActionSequences_Response";
}

template<>
struct has_fixed_size<panda_move::srv::ActionSequences_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panda_move::srv::ActionSequences_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panda_move::srv::ActionSequences_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panda_move::srv::ActionSequences>()
{
  return "panda_move::srv::ActionSequences";
}

template<>
inline const char * name<panda_move::srv::ActionSequences>()
{
  return "panda_move/srv/ActionSequences";
}

template<>
struct has_fixed_size<panda_move::srv::ActionSequences>
  : std::integral_constant<
    bool,
    has_fixed_size<panda_move::srv::ActionSequences_Request>::value &&
    has_fixed_size<panda_move::srv::ActionSequences_Response>::value
  >
{
};

template<>
struct has_bounded_size<panda_move::srv::ActionSequences>
  : std::integral_constant<
    bool,
    has_bounded_size<panda_move::srv::ActionSequences_Request>::value &&
    has_bounded_size<panda_move::srv::ActionSequences_Response>::value
  >
{
};

template<>
struct is_service<panda_move::srv::ActionSequences>
  : std::true_type
{
};

template<>
struct is_service_request<panda_move::srv::ActionSequences_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panda_move::srv::ActionSequences_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PANDA_MOVE__SRV__DETAIL__ACTION_SEQUENCES__TRAITS_HPP_
