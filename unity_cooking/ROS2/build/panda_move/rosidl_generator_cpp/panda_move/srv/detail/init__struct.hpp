// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_move:srv/Init.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__INIT__STRUCT_HPP_
#define PANDA_MOVE__SRV__DETAIL__INIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"
// Member 'scale'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__panda_move__srv__Init_Request __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__Init_Request __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Init_Request_
{
  using Type = Init_Request_<ContainerAllocator>;

  explicit Init_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Init_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _activated_object_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _activated_object_type activated_object;
  using _position_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _position_type position;
  using _orientation_type =
    std::vector<geometry_msgs::msg::Quaternion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Quaternion_<ContainerAllocator>>>;
  _orientation_type orientation;
  using _scale_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _scale_type scale;
  using _joint_state_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _joint_state_type joint_state;

  // setters for named parameter idiom
  Type & set__activated_object(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->activated_object = _arg;
    return *this;
  }
  Type & set__position(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const std::vector<geometry_msgs::msg::Quaternion_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Quaternion_<ContainerAllocator>>> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__scale(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->scale = _arg;
    return *this;
  }
  Type & set__joint_state(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->joint_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::srv::Init_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::Init_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::Init_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::Init_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Init_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Init_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Init_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Init_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::Init_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::Init_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__Init_Request
    std::shared_ptr<panda_move::srv::Init_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__Init_Request
    std::shared_ptr<panda_move::srv::Init_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Init_Request_ & other) const
  {
    if (this->activated_object != other.activated_object) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->scale != other.scale) {
      return false;
    }
    if (this->joint_state != other.joint_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Init_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Init_Request_

// alias to use template instance with default allocator
using Init_Request =
  panda_move::srv::Init_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move


#ifndef _WIN32
# define DEPRECATED__panda_move__srv__Init_Response __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__Init_Response __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Init_Response_
{
  using Type = Init_Response_<ContainerAllocator>;

  explicit Init_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->init_state = 0ll;
    }
  }

  explicit Init_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->init_state = 0ll;
    }
  }

  // field types and members
  using _init_state_type =
    int64_t;
  _init_state_type init_state;

  // setters for named parameter idiom
  Type & set__init_state(
    const int64_t & _arg)
  {
    this->init_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::srv::Init_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::Init_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::Init_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::Init_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Init_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Init_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Init_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Init_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::Init_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::Init_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__Init_Response
    std::shared_ptr<panda_move::srv::Init_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__Init_Response
    std::shared_ptr<panda_move::srv::Init_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Init_Response_ & other) const
  {
    if (this->init_state != other.init_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Init_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Init_Response_

// alias to use template instance with default allocator
using Init_Response =
  panda_move::srv::Init_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move

namespace panda_move
{

namespace srv
{

struct Init
{
  using Request = panda_move::srv::Init_Request;
  using Response = panda_move::srv::Init_Response;
};

}  // namespace srv

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__INIT__STRUCT_HPP_
