// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_tcp_endpoint:srv/RosUnityTopicList.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__FUNCTIONS_H_
#define ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_tcp_endpoint/msg/rosidl_generator_c__visibility_control.h"

#include "ros_tcp_endpoint/srv/detail/ros_unity_topic_list__struct.h"

/// Initialize srv/RosUnityTopicList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_tcp_endpoint__srv__RosUnityTopicList_Request
 * )) before or use
 * ros_tcp_endpoint__srv__RosUnityTopicList_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Request__init(ros_tcp_endpoint__srv__RosUnityTopicList_Request * msg);

/// Finalize srv/RosUnityTopicList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
void
ros_tcp_endpoint__srv__RosUnityTopicList_Request__fini(ros_tcp_endpoint__srv__RosUnityTopicList_Request * msg);

/// Create srv/RosUnityTopicList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
ros_tcp_endpoint__srv__RosUnityTopicList_Request *
ros_tcp_endpoint__srv__RosUnityTopicList_Request__create();

/// Destroy srv/RosUnityTopicList message.
/**
 * It calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
void
ros_tcp_endpoint__srv__RosUnityTopicList_Request__destroy(ros_tcp_endpoint__srv__RosUnityTopicList_Request * msg);

/// Check for srv/RosUnityTopicList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Request__are_equal(const ros_tcp_endpoint__srv__RosUnityTopicList_Request * lhs, const ros_tcp_endpoint__srv__RosUnityTopicList_Request * rhs);

/// Copy a srv/RosUnityTopicList message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Request__copy(
  const ros_tcp_endpoint__srv__RosUnityTopicList_Request * input,
  ros_tcp_endpoint__srv__RosUnityTopicList_Request * output);

/// Initialize array of srv/RosUnityTopicList messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence__init(ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence * array, size_t size);

/// Finalize array of srv/RosUnityTopicList messages.
/**
 * It calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
void
ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence__fini(ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence * array);

/// Create array of srv/RosUnityTopicList messages.
/**
 * It allocates the memory for the array and calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence *
ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence__create(size_t size);

/// Destroy array of srv/RosUnityTopicList messages.
/**
 * It calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
void
ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence__destroy(ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence * array);

/// Check for srv/RosUnityTopicList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence__are_equal(const ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence * lhs, const ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence * rhs);

/// Copy an array of srv/RosUnityTopicList messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence__copy(
  const ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence * input,
  ros_tcp_endpoint__srv__RosUnityTopicList_Request__Sequence * output);

/// Initialize srv/RosUnityTopicList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_tcp_endpoint__srv__RosUnityTopicList_Response
 * )) before or use
 * ros_tcp_endpoint__srv__RosUnityTopicList_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Response__init(ros_tcp_endpoint__srv__RosUnityTopicList_Response * msg);

/// Finalize srv/RosUnityTopicList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
void
ros_tcp_endpoint__srv__RosUnityTopicList_Response__fini(ros_tcp_endpoint__srv__RosUnityTopicList_Response * msg);

/// Create srv/RosUnityTopicList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
ros_tcp_endpoint__srv__RosUnityTopicList_Response *
ros_tcp_endpoint__srv__RosUnityTopicList_Response__create();

/// Destroy srv/RosUnityTopicList message.
/**
 * It calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
void
ros_tcp_endpoint__srv__RosUnityTopicList_Response__destroy(ros_tcp_endpoint__srv__RosUnityTopicList_Response * msg);

/// Check for srv/RosUnityTopicList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Response__are_equal(const ros_tcp_endpoint__srv__RosUnityTopicList_Response * lhs, const ros_tcp_endpoint__srv__RosUnityTopicList_Response * rhs);

/// Copy a srv/RosUnityTopicList message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Response__copy(
  const ros_tcp_endpoint__srv__RosUnityTopicList_Response * input,
  ros_tcp_endpoint__srv__RosUnityTopicList_Response * output);

/// Initialize array of srv/RosUnityTopicList messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence__init(ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence * array, size_t size);

/// Finalize array of srv/RosUnityTopicList messages.
/**
 * It calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
void
ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence__fini(ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence * array);

/// Create array of srv/RosUnityTopicList messages.
/**
 * It allocates the memory for the array and calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence *
ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence__create(size_t size);

/// Destroy array of srv/RosUnityTopicList messages.
/**
 * It calls
 * ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
void
ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence__destroy(ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence * array);

/// Check for srv/RosUnityTopicList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence__are_equal(const ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence * lhs, const ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence * rhs);

/// Copy an array of srv/RosUnityTopicList messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_tcp_endpoint
bool
ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence__copy(
  const ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence * input,
  ros_tcp_endpoint__srv__RosUnityTopicList_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__FUNCTIONS_H_
