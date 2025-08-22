// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from panda_move:srv/Hand.idl
// generated code does not contain a copyright notice
#include "panda_move/srv/detail/hand__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "panda_move/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "panda_move/srv/detail/hand__struct.h"
#include "panda_move/srv/detail/hand__functions.h"
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

#include "rosidl_runtime_c/string.h"  // object_name
#include "rosidl_runtime_c/string_functions.h"  // object_name

// forward declare type support functions


using _Hand_Request__ros_msg_type = panda_move__srv__Hand_Request;

static bool _Hand_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Hand_Request__ros_msg_type * ros_message = static_cast<const _Hand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: grasp_state
  {
    cdr << (ros_message->grasp_state ? true : false);
  }

  // Field name: object_name
  {
    const rosidl_runtime_c__String * str = &ros_message->object_name;
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

  // Field name: grasp_size
  {
    cdr << ros_message->grasp_size;
  }

  return true;
}

static bool _Hand_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Hand_Request__ros_msg_type * ros_message = static_cast<_Hand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: grasp_state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->grasp_state = tmp ? true : false;
  }

  // Field name: object_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->object_name.data) {
      rosidl_runtime_c__String__init(&ros_message->object_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->object_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'object_name'\n");
      return false;
    }
  }

  // Field name: grasp_size
  {
    cdr >> ros_message->grasp_size;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t get_serialized_size_panda_move__srv__Hand_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Hand_Request__ros_msg_type * ros_message = static_cast<const _Hand_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name grasp_state
  {
    size_t item_size = sizeof(ros_message->grasp_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->object_name.size + 1);
  // field.name grasp_size
  {
    size_t item_size = sizeof(ros_message->grasp_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Hand_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_panda_move__srv__Hand_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t max_serialized_size_panda_move__srv__Hand_Request(
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

  // member: grasp_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: object_name
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
  // member: grasp_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = panda_move__srv__Hand_Request;
    is_plain =
      (
      offsetof(DataType, grasp_size) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Hand_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_panda_move__srv__Hand_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Hand_Request = {
  "panda_move::srv",
  "Hand_Request",
  _Hand_Request__cdr_serialize,
  _Hand_Request__cdr_deserialize,
  _Hand_Request__get_serialized_size,
  _Hand_Request__max_serialized_size
};

static rosidl_message_type_support_t _Hand_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Hand_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, Hand_Request)() {
  return &_Hand_Request__type_support;
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
// #include "panda_move/srv/detail/hand__struct.h"
// already included above
// #include "panda_move/srv/detail/hand__functions.h"
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


using _Hand_Response__ros_msg_type = panda_move__srv__Hand_Response;

static bool _Hand_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Hand_Response__ros_msg_type * ros_message = static_cast<const _Hand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: execute_state
  {
    cdr << ros_message->execute_state;
  }

  return true;
}

static bool _Hand_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Hand_Response__ros_msg_type * ros_message = static_cast<_Hand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: execute_state
  {
    cdr >> ros_message->execute_state;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t get_serialized_size_panda_move__srv__Hand_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Hand_Response__ros_msg_type * ros_message = static_cast<const _Hand_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name execute_state
  {
    size_t item_size = sizeof(ros_message->execute_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Hand_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_panda_move__srv__Hand_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t max_serialized_size_panda_move__srv__Hand_Response(
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

  // member: execute_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = panda_move__srv__Hand_Response;
    is_plain =
      (
      offsetof(DataType, execute_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Hand_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_panda_move__srv__Hand_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Hand_Response = {
  "panda_move::srv",
  "Hand_Response",
  _Hand_Response__cdr_serialize,
  _Hand_Response__cdr_deserialize,
  _Hand_Response__get_serialized_size,
  _Hand_Response__max_serialized_size
};

static rosidl_message_type_support_t _Hand_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Hand_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, Hand_Response)() {
  return &_Hand_Response__type_support;
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
#include "panda_move/srv/hand.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Hand__callbacks = {
  "panda_move::srv",
  "Hand",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, Hand_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, Hand_Response)(),
};

static rosidl_service_type_support_t Hand__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Hand__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, Hand)() {
  return &Hand__handle;
}

#if defined(__cplusplus)
}
#endif
