// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_move:srv/Hand.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__HAND__TRAITS_HPP_
#define PANDA_MOVE__SRV__DETAIL__HAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_move/srv/detail/hand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const Hand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: grasp_state
  {
    out << "grasp_state: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_state, out);
    out << ", ";
  }

  // member: object_name
  {
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
    out << ", ";
  }

  // member: grasp_size
  {
    out << "grasp_size: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Hand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grasp_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_state: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_state, out);
    out << "\n";
  }

  // member: object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_name: ";
    rosidl_generator_traits::value_to_yaml(msg.object_name, out);
    out << "\n";
  }

  // member: grasp_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_size: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Hand_Request & msg, bool use_flow_style = false)
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
  const panda_move::srv::Hand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::Hand_Request & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::Hand_Request>()
{
  return "panda_move::srv::Hand_Request";
}

template<>
inline const char * name<panda_move::srv::Hand_Request>()
{
  return "panda_move/srv/Hand_Request";
}

template<>
struct has_fixed_size<panda_move::srv::Hand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panda_move::srv::Hand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panda_move::srv::Hand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const Hand_Response & msg,
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
  const Hand_Response & msg,
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

inline std::string to_yaml(const Hand_Response & msg, bool use_flow_style = false)
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
  const panda_move::srv::Hand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::Hand_Response & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::Hand_Response>()
{
  return "panda_move::srv::Hand_Response";
}

template<>
inline const char * name<panda_move::srv::Hand_Response>()
{
  return "panda_move/srv/Hand_Response";
}

template<>
struct has_fixed_size<panda_move::srv::Hand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panda_move::srv::Hand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panda_move::srv::Hand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panda_move::srv::Hand>()
{
  return "panda_move::srv::Hand";
}

template<>
inline const char * name<panda_move::srv::Hand>()
{
  return "panda_move/srv/Hand";
}

template<>
struct has_fixed_size<panda_move::srv::Hand>
  : std::integral_constant<
    bool,
    has_fixed_size<panda_move::srv::Hand_Request>::value &&
    has_fixed_size<panda_move::srv::Hand_Response>::value
  >
{
};

template<>
struct has_bounded_size<panda_move::srv::Hand>
  : std::integral_constant<
    bool,
    has_bounded_size<panda_move::srv::Hand_Request>::value &&
    has_bounded_size<panda_move::srv::Hand_Response>::value
  >
{
};

template<>
struct is_service<panda_move::srv::Hand>
  : std::true_type
{
};

template<>
struct is_service_request<panda_move::srv::Hand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panda_move::srv::Hand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PANDA_MOVE__SRV__DETAIL__HAND__TRAITS_HPP_
