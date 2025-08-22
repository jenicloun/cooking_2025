// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_move:srv/Plan.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__PLAN__TRAITS_HPP_
#define PANDA_MOVE__SRV__DETAIL__PLAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_move/srv/detail/plan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const Plan_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectories
  {
    if (msg.trajectories.size() == 0) {
      out << "trajectories: []";
    } else {
      out << "trajectories: [";
      size_t pending_items = msg.trajectories.size();
      for (auto item : msg.trajectories) {
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
  const Plan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectories.size() == 0) {
      out << "trajectories: []\n";
    } else {
      out << "trajectories:\n";
      for (auto item : msg.trajectories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Plan_Request & msg, bool use_flow_style = false)
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
  const panda_move::srv::Plan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::Plan_Request & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::Plan_Request>()
{
  return "panda_move::srv::Plan_Request";
}

template<>
inline const char * name<panda_move::srv::Plan_Request>()
{
  return "panda_move/srv/Plan_Request";
}

template<>
struct has_fixed_size<panda_move::srv::Plan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panda_move::srv::Plan_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panda_move::srv::Plan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const Plan_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: execute_state
  {
    out << "execute_state: ";
    rosidl_generator_traits::value_to_yaml(msg.execute_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Plan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: execute_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execute_state: ";
    rosidl_generator_traits::value_to_yaml(msg.execute_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Plan_Response & msg, bool use_flow_style = false)
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
  const panda_move::srv::Plan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::Plan_Response & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::Plan_Response>()
{
  return "panda_move::srv::Plan_Response";
}

template<>
inline const char * name<panda_move::srv::Plan_Response>()
{
  return "panda_move/srv/Plan_Response";
}

template<>
struct has_fixed_size<panda_move::srv::Plan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panda_move::srv::Plan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panda_move::srv::Plan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panda_move::srv::Plan>()
{
  return "panda_move::srv::Plan";
}

template<>
inline const char * name<panda_move::srv::Plan>()
{
  return "panda_move/srv/Plan";
}

template<>
struct has_fixed_size<panda_move::srv::Plan>
  : std::integral_constant<
    bool,
    has_fixed_size<panda_move::srv::Plan_Request>::value &&
    has_fixed_size<panda_move::srv::Plan_Response>::value
  >
{
};

template<>
struct has_bounded_size<panda_move::srv::Plan>
  : std::integral_constant<
    bool,
    has_bounded_size<panda_move::srv::Plan_Request>::value &&
    has_bounded_size<panda_move::srv::Plan_Response>::value
  >
{
};

template<>
struct is_service<panda_move::srv::Plan>
  : std::true_type
{
};

template<>
struct is_service_request<panda_move::srv::Plan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panda_move::srv::Plan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PANDA_MOVE__SRV__DETAIL__PLAN__TRAITS_HPP_
