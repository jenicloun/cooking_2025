// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from panda_move:srv/ActionSequences.idl
// generated code does not contain a copyright notice
#include "panda_move/srv/detail/action_sequences__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "panda_move/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "panda_move/srv/detail/action_sequences__struct.h"
#include "panda_move/srv/detail/action_sequences__functions.h"
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

#include "panda_move/msg/detail/action__functions.h"  // action_sequences

// forward declare type support functions
size_t get_serialized_size_panda_move__msg__Action(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_panda_move__msg__Action(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, msg, Action)();


using _ActionSequences_Request__ros_msg_type = panda_move__srv__ActionSequences_Request;

static bool _ActionSequences_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionSequences_Request__ros_msg_type * ros_message = static_cast<const _ActionSequences_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: action_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, panda_move, msg, Action
      )()->data);
    size_t size = ros_message->action_sequences.size;
    auto array_ptr = ros_message->action_sequences.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ActionSequences_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionSequences_Request__ros_msg_type * ros_message = static_cast<_ActionSequences_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: action_sequences
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, panda_move, msg, Action
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->action_sequences.data) {
      panda_move__msg__Action__Sequence__fini(&ros_message->action_sequences);
    }
    if (!panda_move__msg__Action__Sequence__init(&ros_message->action_sequences, size)) {
      fprintf(stderr, "failed to create array for field 'action_sequences'");
      return false;
    }
    auto array_ptr = ros_message->action_sequences.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t get_serialized_size_panda_move__srv__ActionSequences_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionSequences_Request__ros_msg_type * ros_message = static_cast<const _ActionSequences_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name action_sequences
  {
    size_t array_size = ros_message->action_sequences.size;
    auto array_ptr = ros_message->action_sequences.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_panda_move__msg__Action(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ActionSequences_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_panda_move__srv__ActionSequences_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t max_serialized_size_panda_move__srv__ActionSequences_Request(
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

  // member: action_sequences
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_panda_move__msg__Action(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = panda_move__srv__ActionSequences_Request;
    is_plain =
      (
      offsetof(DataType, action_sequences) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ActionSequences_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_panda_move__srv__ActionSequences_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ActionSequences_Request = {
  "panda_move::srv",
  "ActionSequences_Request",
  _ActionSequences_Request__cdr_serialize,
  _ActionSequences_Request__cdr_deserialize,
  _ActionSequences_Request__get_serialized_size,
  _ActionSequences_Request__max_serialized_size
};

static rosidl_message_type_support_t _ActionSequences_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionSequences_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, ActionSequences_Request)() {
  return &_ActionSequences_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "panda_move/srv/detail/action_sequences__struct.h"
// already included above
// #include "panda_move/srv/detail/action_sequences__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _ActionSequences_Response__ros_msg_type = panda_move__srv__ActionSequences_Response;

static bool _ActionSequences_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ActionSequences_Response__ros_msg_type * ros_message = static_cast<const _ActionSequences_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _ActionSequences_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ActionSequences_Response__ros_msg_type * ros_message = static_cast<_ActionSequences_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t get_serialized_size_panda_move__srv__ActionSequences_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ActionSequences_Response__ros_msg_type * ros_message = static_cast<const _ActionSequences_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ActionSequences_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_panda_move__srv__ActionSequences_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t max_serialized_size_panda_move__srv__ActionSequences_Response(
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

  // member: result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = panda_move__srv__ActionSequences_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ActionSequences_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_panda_move__srv__ActionSequences_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ActionSequences_Response = {
  "panda_move::srv",
  "ActionSequences_Response",
  _ActionSequences_Response__cdr_serialize,
  _ActionSequences_Response__cdr_deserialize,
  _ActionSequences_Response__get_serialized_size,
  _ActionSequences_Response__max_serialized_size
};

static rosidl_message_type_support_t _ActionSequences_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ActionSequences_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, ActionSequences_Response)() {
  return &_ActionSequences_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "panda_move/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "panda_move/srv/action_sequences.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ActionSequences__callbacks = {
  "panda_move::srv",
  "ActionSequences",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, ActionSequences_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, ActionSequences_Response)(),
};

static rosidl_service_type_support_t ActionSequences__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ActionSequences__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, ActionSequences)() {
  return &ActionSequences__handle;
}

#if defined(__cplusplus)
}
#endif
