// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_tcp_endpoint:msg/RosUnityError.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__STRUCT_HPP_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_tcp_endpoint__msg__RosUnityError __attribute__((deprecated))
#else
# define DEPRECATED__ros_tcp_endpoint__msg__RosUnityError __declspec(deprecated)
#endif

namespace ros_tcp_endpoint
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RosUnityError_
{
  using Type = RosUnityError_<ContainerAllocator>;

  explicit RosUnityError_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit RosUnityError_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_tcp_endpoint__msg__RosUnityError
    std::shared_ptr<ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_tcp_endpoint__msg__RosUnityError
    std::shared_ptr<ros_tcp_endpoint::msg::RosUnityError_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosUnityError_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosUnityError_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosUnityError_

// alias to use template instance with default allocator
using RosUnityError =
  ros_tcp_endpoint::msg::RosUnityError_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_tcp_endpoint

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_ERROR__STRUCT_HPP_
