// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_tcp_endpoint:msg/RosUnitySrvMessage.idl
// generated code does not contain a copyright notice
#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_tcp_endpoint/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__struct.h"
#include "ros_tcp_endpoint/msg/detail/ros_unity_srv_message__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // payload
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // payload
#include "rosidl_runtime_c/string.h"  // topic
#include "rosidl_runtime_c/string_functions.h"  // topic

// forward declare type support functions


using _RosUnitySrvMessage__ros_msg_type = ros_tcp_endpoint__msg__RosUnitySrvMessage;

static bool _RosUnitySrvMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosUnitySrvMessage__ros_msg_type * ros_message = static_cast<const _RosUnitySrvMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: srv_id
  {
    cdr << ros_message->srv_id;
  }

  // Field name: is_request
  {
    cdr << (ros_message->is_request ? true : false);
  }

  // Field name: topic
  {
    const rosidl_runtime_c__String * str = &ros_message->topic;
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

  // Field name: payload
  {
    size_t size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RosUnitySrvMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosUnitySrvMessage__ros_msg_type * ros_message = static_cast<_RosUnitySrvMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: srv_id
  {
    cdr >> ros_message->srv_id;
  }

  // Field name: is_request
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_request = tmp ? true : false;
  }

  // Field name: topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->topic.data) {
      rosidl_runtime_c__String__init(&ros_message->topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'topic'\n");
      return false;
    }
  }

  // Field name: payload
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->payload.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->payload);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->payload, size)) {
      fprintf(stderr, "failed to create array for field 'payload'");
      return false;
    }
    auto array_ptr = ros_message->payload.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_tcp_endpoint
size_t get_serialized_size_ros_tcp_endpoint__msg__RosUnitySrvMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosUnitySrvMessage__ros_msg_type * ros_message = static_cast<const _RosUnitySrvMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name srv_id
  {
    size_t item_size = sizeof(ros_message->srv_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_request
  {
    size_t item_size = sizeof(ros_message->is_request);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->topic.size + 1);
  // field.name payload
  {
    size_t array_size = ros_message->payload.size;
    auto array_ptr = ros_message->payload.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RosUnitySrvMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_tcp_endpoint__msg__RosUnitySrvMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_tcp_endpoint
size_t max_serialized_size_ros_tcp_endpoint__msg__RosUnitySrvMessage(
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

  // member: srv_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_request
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: topic
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
  // member: payload
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_tcp_endpoint__msg__RosUnitySrvMessage;
    is_plain =
      (
      offsetof(DataType, payload) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RosUnitySrvMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_tcp_endpoint__msg__RosUnitySrvMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosUnitySrvMessage = {
  "ros_tcp_endpoint::msg",
  "RosUnitySrvMessage",
  _RosUnitySrvMessage__cdr_serialize,
  _RosUnitySrvMessage__cdr_deserialize,
  _RosUnitySrvMessage__get_serialized_size,
  _RosUnitySrvMessage__max_serialized_size
};

static rosidl_message_type_support_t _RosUnitySrvMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosUnitySrvMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_tcp_endpoint, msg, RosUnitySrvMessage)() {
  return &_RosUnitySrvMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
