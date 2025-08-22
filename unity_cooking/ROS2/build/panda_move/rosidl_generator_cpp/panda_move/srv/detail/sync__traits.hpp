// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from panda_move:srv/Sync.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__SYNC__TRAITS_HPP_
#define PANDA_MOVE__SRV__DETAIL__SYNC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "panda_move/srv/detail/sync__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const Sync_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: activated_object
  {
    if (msg.activated_object.size() == 0) {
      out << "activated_object: []";
    } else {
      out << "activated_object: [";
      size_t pending_items = msg.activated_object.size();
      for (auto item : msg.activated_object) {
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
  const Sync_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: activated_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.activated_object.size() == 0) {
      out << "activated_object: []\n";
    } else {
      out << "activated_object:\n";
      for (auto item : msg.activated_object) {
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

inline std::string to_yaml(const Sync_Request & msg, bool use_flow_style = false)
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
  const panda_move::srv::Sync_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::Sync_Request & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::Sync_Request>()
{
  return "panda_move::srv::Sync_Request";
}

template<>
inline const char * name<panda_move::srv::Sync_Request>()
{
  return "panda_move/srv/Sync_Request";
}

template<>
struct has_fixed_size<panda_move::srv::Sync_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panda_move::srv::Sync_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panda_move::srv::Sync_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace panda_move
{

namespace srv
{

inline void to_flow_style_yaml(
  const Sync_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: object_name
  {
    if (msg.object_name.size() == 0) {
      out << "object_name: []";
    } else {
      out << "object_name: [";
      size_t pending_items = msg.object_name.size();
      for (auto item : msg.object_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orientation
  {
    if (msg.orientation.size() == 0) {
      out << "orientation: []";
    } else {
      out << "orientation: [";
      size_t pending_items = msg.orientation.size();
      for (auto item : msg.orientation) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_state
  {
    if (msg.joint_state.size() == 0) {
      out << "joint_state: []";
    } else {
      out << "joint_state: [";
      size_t pending_items = msg.joint_state.size();
      for (auto item : msg.joint_state) {
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
  const Sync_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: object_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.object_name.size() == 0) {
      out << "object_name: []\n";
    } else {
      out << "object_name:\n";
      for (auto item : msg.object_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orientation.size() == 0) {
      out << "orientation: []\n";
    } else {
      out << "orientation:\n";
      for (auto item : msg.orientation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: joint_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_state.size() == 0) {
      out << "joint_state: []\n";
    } else {
      out << "joint_state:\n";
      for (auto item : msg.joint_state) {
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

inline std::string to_yaml(const Sync_Response & msg, bool use_flow_style = false)
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
  const panda_move::srv::Sync_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  panda_move::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use panda_move::srv::to_yaml() instead")]]
inline std::string to_yaml(const panda_move::srv::Sync_Response & msg)
{
  return panda_move::srv::to_yaml(msg);
}

template<>
inline const char * data_type<panda_move::srv::Sync_Response>()
{
  return "panda_move::srv::Sync_Response";
}

template<>
inline const char * name<panda_move::srv::Sync_Response>()
{
  return "panda_move/srv/Sync_Response";
}

template<>
struct has_fixed_size<panda_move::srv::Sync_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<panda_move::srv::Sync_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<panda_move::srv::Sync_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<panda_move::srv::Sync>()
{
  return "panda_move::srv::Sync";
}

template<>
inline const char * name<panda_move::srv::Sync>()
{
  return "panda_move/srv/Sync";
}

template<>
struct has_fixed_size<panda_move::srv::Sync>
  : std::integral_constant<
    bool,
    has_fixed_size<panda_move::srv::Sync_Request>::value &&
    has_fixed_size<panda_move::srv::Sync_Response>::value
  >
{
};

template<>
struct has_bounded_size<panda_move::srv::Sync>
  : std::integral_constant<
    bool,
    has_bounded_size<panda_move::srv::Sync_Request>::value &&
    has_bounded_size<panda_move::srv::Sync_Response>::value
  >
{
};

template<>
struct is_service<panda_move::srv::Sync>
  : std::true_type
{
};

template<>
struct is_service_request<panda_move::srv::Sync_Request>
  : std::true_type
{
};

template<>
struct is_service_response<panda_move::srv::Sync_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // PANDA_MOVE__SRV__DETAIL__SYNC__TRAITS_HPP_
