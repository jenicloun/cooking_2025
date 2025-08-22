// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from panda_move:srv/MotionCheck.idl
// generated code does not contain a copyright notice
#include "panda_move/srv/detail/motion_check__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "panda_move/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "panda_move/srv/detail/motion_check__struct.h"
#include "panda_move/srv/detail/motion_check__functions.h"
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

#include "rosidl_runtime_c/string.h"  // motion_type, object_1, object_2
#include "rosidl_runtime_c/string_functions.h"  // motion_type, object_1, object_2

// forward declare type support functions


using _MotionCheck_Request__ros_msg_type = panda_move__srv__MotionCheck_Request;

static bool _MotionCheck_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionCheck_Request__ros_msg_type * ros_message = static_cast<const _MotionCheck_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_type
  {
    const rosidl_runtime_c__String * str = &ros_message->motion_type;
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

  // Field name: object_1
  {
    size_t size = ros_message->object_1.size;
    auto array_ptr = ros_message->object_1.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: object_2
  {
    size_t size = ros_message->object_2.size;
    auto array_ptr = ros_message->object_2.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  return true;
}

static bool _MotionCheck_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionCheck_Request__ros_msg_type * ros_message = static_cast<_MotionCheck_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: motion_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motion_type.data) {
      rosidl_runtime_c__String__init(&ros_message->motion_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motion_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motion_type'\n");
      return false;
    }
  }

  // Field name: object_1
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_1.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->object_1);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->object_1, size)) {
      fprintf(stderr, "failed to create array for field 'object_1'");
      return false;
    }
    auto array_ptr = ros_message->object_1.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'object_1'\n");
        return false;
      }
    }
  }

  // Field name: object_2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_2.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->object_2);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->object_2, size)) {
      fprintf(stderr, "failed to create array for field 'object_2'");
      return false;
    }
    auto array_ptr = ros_message->object_2.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'object_2'\n");
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t get_serialized_size_panda_move__srv__MotionCheck_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionCheck_Request__ros_msg_type * ros_message = static_cast<const _MotionCheck_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motion_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motion_type.size + 1);
  // field.name object_1
  {
    size_t array_size = ros_message->object_1.size;
    auto array_ptr = ros_message->object_1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name object_2
  {
    size_t array_size = ros_message->object_2.size;
    auto array_ptr = ros_message->object_2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MotionCheck_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_panda_move__srv__MotionCheck_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t max_serialized_size_panda_move__srv__MotionCheck_Request(
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

  // member: motion_type
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
  // member: object_1
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: object_2
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

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
    using DataType = panda_move__srv__MotionCheck_Request;
    is_plain =
      (
      offsetof(DataType, object_2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotionCheck_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_panda_move__srv__MotionCheck_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotionCheck_Request = {
  "panda_move::srv",
  "MotionCheck_Request",
  _MotionCheck_Request__cdr_serialize,
  _MotionCheck_Request__cdr_deserialize,
  _MotionCheck_Request__get_serialized_size,
  _MotionCheck_Request__max_serialized_size
};

static rosidl_message_type_support_t _MotionCheck_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionCheck_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, MotionCheck_Request)() {
  return &_MotionCheck_Request__type_support;
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
// #include "panda_move/srv/detail/motion_check__struct.h"
// already included above
// #include "panda_move/srv/detail/motion_check__functions.h"
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


using _MotionCheck_Response__ros_msg_type = panda_move__srv__MotionCheck_Response;

static bool _MotionCheck_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MotionCheck_Response__ros_msg_type * ros_message = static_cast<const _MotionCheck_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: execute_state
  {
    cdr << ros_message->execute_state;
  }

  return true;
}

static bool _MotionCheck_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MotionCheck_Response__ros_msg_type * ros_message = static_cast<_MotionCheck_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: execute_state
  {
    cdr >> ros_message->execute_state;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t get_serialized_size_panda_move__srv__MotionCheck_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MotionCheck_Response__ros_msg_type * ros_message = static_cast<const _MotionCheck_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _MotionCheck_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_panda_move__srv__MotionCheck_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_panda_move
size_t max_serialized_size_panda_move__srv__MotionCheck_Response(
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
    using DataType = panda_move__srv__MotionCheck_Response;
    is_plain =
      (
      offsetof(DataType, execute_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MotionCheck_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_panda_move__srv__MotionCheck_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MotionCheck_Response = {
  "panda_move::srv",
  "MotionCheck_Response",
  _MotionCheck_Response__cdr_serialize,
  _MotionCheck_Response__cdr_deserialize,
  _MotionCheck_Response__get_serialized_size,
  _MotionCheck_Response__max_serialized_size
};

static rosidl_message_type_support_t _MotionCheck_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MotionCheck_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, MotionCheck_Response)() {
  return &_MotionCheck_Response__type_support;
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
#include "panda_move/srv/motion_check.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MotionCheck__callbacks = {
  "panda_move::srv",
  "MotionCheck",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, MotionCheck_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, MotionCheck_Response)(),
};

static rosidl_service_type_support_t MotionCheck__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MotionCheck__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, panda_move, srv, MotionCheck)() {
  return &MotionCheck__handle;
}

#if defined(__cplusplus)
}
#endif
