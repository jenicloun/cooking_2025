// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_move:srv/MotionCheck.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__TRAITS_HPP_
#define PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_move/srv/detail/motion_check__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotionCheck_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: motion_type
  {
    out << "motion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_type, out);
    out << ", ";
  }

  // member: object_1
  {
    if (msg.object_1.size() == 0) {
      out << "object_1: []";
    } else {
      out << "object_1: [";
      size_t pending_items = msg.object_1.size();
      for (auto item : msg.object_1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: object_2
  {
    if (msg.object_2.size() == 0) {
      out << "object_2: []";
    } else {
      out << "object_2: [";
      size_t pending_items = msg.object_2.size();
      for (auto item : msg.object_2) {
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
  const MotionCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_type: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_type, out);
    out << "\n";
  }

  // member: object_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_1.size() == 0) {
      out << "object_1: []\n";
    } else {
      out << "object_1:\n";
      for (auto item : msg.object_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: object_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_2.size() == 0) {
      out << "object_2: []\n";
    } else {
      out << "object_2:\n";
      for (auto item : msg.object_2) {
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

inline std::string to_yaml(const MotionCheck_Request & msg, bool use_flow_style = false)
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
  const panda_move::srv::MotionCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::MotionCheck_Request & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::MotionCheck_Request>()
{
  return "panda_move::srv::MotionCheck_Request";
}

template<>
inline const char * name<panda_move::srv::MotionCheck_Request>()
{
  return "panda_move/srv/MotionCheck_Request";
}

template<>
struct has_fixed_size<panda_move::srv::MotionCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panda_move::srv::MotionCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panda_move::srv::MotionCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const MotionCheck_Response & msg,
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
  const MotionCheck_Response & msg,
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

inline std::string to_yaml(const MotionCheck_Response & msg, bool use_flow_style = false)
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
  const panda_move::srv::MotionCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::MotionCheck_Response & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::MotionCheck_Response>()
{
  return "panda_move::srv::MotionCheck_Response";
}

template<>
inline const char * name<panda_move::srv::MotionCheck_Response>()
{
  return "panda_move/srv/MotionCheck_Response";
}

template<>
struct has_fixed_size<panda_move::srv::MotionCheck_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<panda_move::srv::MotionCheck_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<panda_move::srv::MotionCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panda_move::srv::MotionCheck>()
{
  return "panda_move::srv::MotionCheck";
}

template<>
inline const char * name<panda_move::srv::MotionCheck>()
{
  return "panda_move/srv/MotionCheck";
}

template<>
struct has_fixed_size<panda_move::srv::MotionCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<panda_move::srv::MotionCheck_Request>::value &&
    has_fixed_size<panda_move::srv::MotionCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<panda_move::srv::MotionCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<panda_move::srv::MotionCheck_Request>::value &&
    has_bounded_size<panda_move::srv::MotionCheck_Response>::value
  >
{
};

template<>
struct is_service<panda_move::srv::MotionCheck>
  : std::true_type
{
};

template<>
struct is_service_request<panda_move::srv::MotionCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panda_move::srv::MotionCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PANDA_MOVE__SRV__DETAIL__MOTION_CHECK__TRAITS_HPP_
