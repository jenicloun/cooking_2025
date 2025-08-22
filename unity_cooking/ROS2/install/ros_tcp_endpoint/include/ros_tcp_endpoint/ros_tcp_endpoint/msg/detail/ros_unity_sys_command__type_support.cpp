// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_tcp_endpoint:msg/RosUnitySysCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_tcp_endpoint/msg/detail/ros_unity_sys_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ros_tcp_endpoint
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RosUnitySysCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_tcp_endpoint::msg::RosUnitySysCommand(_init);
}

void RosUnitySysCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_tcp_endpoint::msg::RosUnitySysCommand *>(message_memory);
  typed_message->~RosUnitySysCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RosUnitySysCommand_message_member_array[2] = {
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint::msg::RosUnitySysCommand, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "params_json",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint::msg::RosUnitySysCommand, params_json),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RosUnitySysCommand_message_members = {
  "ros_tcp_endpoint::msg",  // message namespace
  "RosUnitySysCommand",  // message name
  2,  // number of fields
  sizeof(ros_tcp_endpoint::msg::RosUnitySysCommand),
  RosUnitySysCommand_message_member_array,  // message members
  RosUnitySysCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  RosUnitySysCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RosUnitySysCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RosUnitySysCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ros_tcp_endpoint


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ros_tcp_endpoint::msg::RosUnitySysCommand>()
{
  return &::ros_tcp_endpoint::msg::rosidl_typesupport_introspection_cpp::RosUnitySysCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_tcp_endpoint, msg, RosUnitySysCommand)() {
  return &::ros_tcp_endpoint::msg::rosidl_typesupport_introspection_cpp::RosUnitySysCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
