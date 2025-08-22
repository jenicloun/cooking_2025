// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_tcp_endpoint:srv/RosUnityTopicList.idl
// generated code does not contain a copyright notice

#ifndef ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__STRUCT_HPP_
#define ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_tcp_endpoint__srv__RosUnityTopicList_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_tcp_endpoint__srv__RosUnityTopicList_Request __declspec(deprecated)
#endif

namespace ros_tcp_endpoint
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosUnityTopicList_Request_
{
  using Type = RosUnityTopicList_Request_<ContainerAllocator>;

  explicit RosUnityTopicList_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RosUnityTopicList_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_tcp_endpoint__srv__RosUnityTopicList_Request
    std::shared_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_tcp_endpoint__srv__RosUnityTopicList_Request
    std::shared_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosUnityTopicList_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosUnityTopicList_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosUnityTopicList_Request_

// alias to use template instance with default allocator
using RosUnityTopicList_Request =
  ros_tcp_endpoint::srv::RosUnityTopicList_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_tcp_endpoint


#ifndef _WIN32
# define DEPRECATED__ros_tcp_endpoint__srv__RosUnityTopicList_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_tcp_endpoint__srv__RosUnityTopicList_Response __declspec(deprecated)
#endif

namespace ros_tcp_endpoint
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RosUnityTopicList_Response_
{
  using Type = RosUnityTopicList_Response_<ContainerAllocator>;

  explicit RosUnityTopicList_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RosUnityTopicList_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _topics_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _topics_type topics;

  // setters for named parameter idiom
  Type & set__topics(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->topics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_tcp_endpoint__srv__RosUnityTopicList_Response
    std::shared_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_tcp_endpoint__srv__RosUnityTopicList_Response
    std::shared_ptr<ros_tcp_endpoint::srv::RosUnityTopicList_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RosUnityTopicList_Response_ & other) const
  {
    if (this->topics != other.topics) {
      return false;
    }
    return true;
  }
  bool operator!=(const RosUnityTopicList_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RosUnityTopicList_Response_

// alias to use template instance with default allocator
using RosUnityTopicList_Response =
  ros_tcp_endpoint::srv::RosUnityTopicList_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_tcp_endpoint

namespace ros_tcp_endpoint
{

namespace srv
{

struct RosUnityTopicList
{
  using Request = ros_tcp_endpoint::srv::RosUnityTopicList_Request;
  using Response = ros_tcp_endpoint::srv::RosUnityTopicList_Response;
};

}  // namespace srv

}  // namespace ros_tcp_endpoint

#endif  // ROS_TCP_ENDPOINT__SRV__DETAIL__ROS_UNITY_TOPIC_LIST__STRUCT_HPP_
