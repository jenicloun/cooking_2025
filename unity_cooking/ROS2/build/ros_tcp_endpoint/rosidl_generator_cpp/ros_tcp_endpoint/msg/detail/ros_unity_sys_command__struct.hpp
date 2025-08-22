// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_tcp_endpoint:msg/RosUnitySysCommand.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__STRUCT_HPP_
#define ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_tcp_endpoint__msg__RosUnitySysCommand __attribute__((deprecated))
#else
# define DEPRECATED__ros_tcp_endpoint__msg__RosUnitySysCommand __declspec(deprecated)
#endif

namespace ros_tcp_endpoint
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RosUnitySysCommand_
{
  using Type = RosUnitySysCommand_<ContainerAllocator>;

  explicit RosUnitySysCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->params_json = "";
    }
  }

  explicit RosUnitySysCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : command(_alloc),
    params_json(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = "";
      this->params_json = "";
    }
  }

  // field types and members
  using _command_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _command_type command;
  using _params_json_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _params_json_type params_json;

  // setters for named parameter idiom
  Type & set__command(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__params_json(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->params_json = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_tcp_endpoint__msg__RosUnitySysCommand
    std::shared_ptr<ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_tcp_endpoint__msg__RosUnitySysCommand
    std::shared_ptr<ros_tcp_endpoint::msg::RosUnitySysCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosUnitySysCommand_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->params_json != other.params_json) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosUnitySysCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosUnitySysCommand_

// alias to use template instance with default allocator
using RosUnitySysCommand =
  ros_tcp_endpoint::msg::RosUnitySysCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_tcp_endpoint

#endif  // ROS_TCP_ENDPOINT__MSG__DETAIL__ROS_UNITY_SYS_COMMAND__STRUCT_HPP_
