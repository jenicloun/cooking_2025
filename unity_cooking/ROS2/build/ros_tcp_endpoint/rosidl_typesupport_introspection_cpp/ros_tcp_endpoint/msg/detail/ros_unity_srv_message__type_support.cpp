// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ros_tcp_endpoint:msg/RosUnitySrvMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__struct.hpp"
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

void RosUnitySrvMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ros_tcp_endpoint::msg::RosUnitySrvMessage(_init);
}

void RosUnitySrvMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ros_tcp_endpoint::msg::RosUnitySrvMessage *>(message_memory);
  typed_message->~RosUnitySrvMessage();
}

size_t size_function__RosUnitySrvMessage__payload(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RosUnitySrvMessage__payload(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RosUnitySrvMessage__payload(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RosUnitySrvMessage__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__RosUnitySrvMessage__payload(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__RosUnitySrvMessage__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__RosUnitySrvMessage__payload(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__RosUnitySrvMessage__payload(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RosUnitySrvMessage_message_member_array[4] = {
  {
    "srv_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint::msg::RosUnitySrvMessage, srv_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint::msg::RosUnitySrvMessage, is_request),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "topic",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint::msg::RosUnitySrvMessage, topic),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "payload",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint::msg::RosUnitySrvMessage, payload),  // bytes offset in struct
    nullptr,  // default value
    size_function__RosUnitySrvMessage__payload,  // size() function pointer
    get_const_function__RosUnitySrvMessage__payload,  // get_const(index) function pointer
    get_function__RosUnitySrvMessage__payload,  // get(index) function pointer
    fetch_function__RosUnitySrvMessage__payload,  // fetch(index, &value) function pointer
    assign_function__RosUnitySrvMessage__payload,  // assign(index, value) function pointer
    resize_function__RosUnitySrvMessage__payload  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RosUnitySrvMessage_message_members = {
  "ros_tcp_endpoint::msg",  // message namespace
  "RosUnitySrvMessage",  // message name
  4,  // number of fields
  sizeof(ros_tcp_endpoint::msg::RosUnitySrvMessage),
  RosUnitySrvMessage_message_member_array,  // message members
  RosUnitySrvMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  RosUnitySrvMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RosUnitySrvMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RosUnitySrvMessage_message_members,
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
get_message_type_support_handle<ros_tcp_endpoint::msg::RosUnitySrvMessage>()
{
  return &::ros_tcp_endpoint::msg::rosidl_typesupport_introspection_cpp::RosUnitySrvMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ros_tcp_endpoint, msg, RosUnitySrvMessage)() {
  return &::ros_tcp_endpoint::msg::rosidl_typesupport_introspection_cpp::RosUnitySrvMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
