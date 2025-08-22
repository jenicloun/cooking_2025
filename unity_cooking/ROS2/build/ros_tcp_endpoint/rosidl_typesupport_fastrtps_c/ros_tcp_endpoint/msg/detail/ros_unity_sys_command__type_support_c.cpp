// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_tcp_endpoint:msg/RosUnitySysCommand.idl
// generated code does not contain a copyright notice
#include "ros_tcp_endpoint/msg/detail/ros_unity_sys_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_tcp_endpoint/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_tcp_endpoint/msg/detail/ros_unity_sys_command__struct.h"
#include "ros_tcp_endpoint/msg/detail/ros_unity_sys_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // command, params_json
#include "rosidl_runtime_c/string_functions.h"  // command, params_json

// forward declare type support functions


using _RosUnitySysCommand__ros_msg_type = ros_tcp_endpoint__msg__RosUnitySysCommand;

static bool _RosUnitySysCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosUnitySysCommand__ros_msg_type * ros_message = static_cast<const _RosUnitySysCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    const rosidl_runtime_c__String * str = &ros_message->command;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: params_json
  {
    const rosidl_runtime_c__String * str = &ros_message->params_json;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _RosUnitySysCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosUnitySysCommand__ros_msg_type * ros_message = static_cast<_RosUnitySysCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: command
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->command.data) {
      rosidl_runtime_c__String__init(&ros_message->command);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->command,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'command'\n");
      return false;
    }
  }

  // Field name: params_json
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->params_json.data) {
      rosidl_runtime_c__String__init(&ros_message->params_json);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->params_json,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'params_json'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_tcp_endpoint
size_t get_serialized_size_ros_tcp_endpoint__msg__RosUnitySysCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosUnitySysCommand__ros_msg_type * ros_message = static_cast<const _RosUnitySysCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name command
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->command.size + 1);
  // field.name params_json
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->params_json.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _RosUnitySysCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_tcp_endpoint__msg__RosUnitySysCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_tcp_endpoint
size_t max_serialized_size_ros_tcp_endpoint__msg__RosUnitySysCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: command
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: params_json
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_tcp_endpoint__msg__RosUnitySysCommand;
    is_plain =
      (
      offsetof(DataType, params_json) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RosUnitySysCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_tcp_endpoint__msg__RosUnitySysCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosUnitySysCommand = {
  "ros_tcp_endpoint::msg",
  "RosUnitySysCommand",
  _RosUnitySysCommand__cdr_serialize,
  _RosUnitySysCommand__cdr_deserialize,
  _RosUnitySysCommand__get_serialized_size,
  _RosUnitySysCommand__max_serialized_size
};

static rosidl_message_type_support_t _RosUnitySysCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosUnitySysCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_tcp_endpoint, msg, RosUnitySysCommand)() {
  return &_RosUnitySysCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
