// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_tcp_endpoint:msg/RosUnitySrvMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__rosidl_typesupport_introspection_c.h"
#include "ros_tcp_endpoint/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__functions.h"
#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__struct.h"


// Include directives for member types
// Member `topic`
#include "rosidl_runtime_c/string_functions.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_tcp_endpoint__msg__RosUnitySrvMessage__init(message_memory);
}

void ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_fini_function(void * message_memory)
{
  ros_tcp_endpoint__msg__RosUnitySrvMessage__fini(message_memory);
}

size_t ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__size_function__RosUnitySrvMessage__payload(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__get_const_function__RosUnitySrvMessage__payload(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__get_function__RosUnitySrvMessage__payload(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__fetch_function__RosUnitySrvMessage__payload(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__get_const_function__RosUnitySrvMessage__payload(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__assign_function__RosUnitySrvMessage__payload(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__get_function__RosUnitySrvMessage__payload(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__resize_function__RosUnitySrvMessage__payload(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_message_member_array[4] = {
  {
    "srv_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint__msg__RosUnitySrvMessage, srv_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint__msg__RosUnitySrvMessage, is_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint__msg__RosUnitySrvMessage, topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_tcp_endpoint__msg__RosUnitySrvMessage, payload),  // bytes offset in struct
    NULL,  // default value
    ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__size_function__RosUnitySrvMessage__payload,  // size() function pointer
    ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__get_const_function__RosUnitySrvMessage__payload,  // get_const(index) function pointer
    ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__get_function__RosUnitySrvMessage__payload,  // get(index) function pointer
    ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__fetch_function__RosUnitySrvMessage__payload,  // fetch(index, &value) function pointer
    ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__assign_function__RosUnitySrvMessage__payload,  // assign(index, value) function pointer
    ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__resize_function__RosUnitySrvMessage__payload  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_message_members = {
  "ros_tcp_endpoint__msg",  // message namespace
  "RosUnitySrvMessage",  // message name
  4,  // number of fields
  sizeof(ros_tcp_endpoint__msg__RosUnitySrvMessage),
  ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_message_member_array,  // message members
  ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_message_type_support_handle = {
  0,
  &ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_tcp_endpoint
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_tcp_endpoint, msg, RosUnitySrvMessage)() {
  if (!ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_message_type_support_handle.typesupport_identifier) {
    ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros_tcp_endpoint__msg__RosUnitySrvMessage__rosidl_typesupport_introspection_c__RosUnitySrvMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
