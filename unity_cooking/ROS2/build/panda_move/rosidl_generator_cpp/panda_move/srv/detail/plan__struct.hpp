// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from panda_move:srv/Plan.idl
// generated code does not contain a copyright notice

#ifndef PANDA_MOVE__SRV__DETAIL__PLAN__STRUCT_HPP_
#define PANDA_MOVE__SRV__DETAIL__PLAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__panda_move__srv__Plan_Request __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__Plan_Request __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Plan_Request_
{
  using Type = Plan_Request_<ContainerAllocator>;

  explicit Plan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Plan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _trajectories_type =
    std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>>;
  _trajectories_type trajectories;

  // setters for named parameter idiom
  Type & set__trajectories(
    const std::vector<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<moveit_msgs::msg::RobotTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectories = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::srv::Plan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::Plan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::Plan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::Plan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Plan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Plan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Plan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Plan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::Plan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::Plan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__Plan_Request
    std::shared_ptr<panda_move::srv::Plan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__Plan_Request
    std::shared_ptr<panda_move::srv::Plan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Plan_Request_ & other) const
  {
    if (this->trajectories != other.trajectories) {
      return false;
    }
    return true;
  }
  bool operator!=(const Plan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Plan_Request_

// alias to use template instance with default allocator
using Plan_Request =
  panda_move::srv::Plan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move


#ifndef _WIN32
# define DEPRECATED__panda_move__srv__Plan_Response __attribute__((deprecated))
#else
# define DEPRECATED__panda_move__srv__Plan_Response __declspec(deprecated)
#endif

namespace panda_move
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Plan_Response_
{
  using Type = Plan_Response_<ContainerAllocator>;

  explicit Plan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->execute_state = 0ll;
    }
  }

  explicit Plan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->execute_state = 0ll;
    }
  }

  // field types and members
  using _execute_state_type =
    int64_t;
  _execute_state_type execute_state;

  // setters for named parameter idiom
  Type & set__execute_state(
    const int64_t & _arg)
  {
    this->execute_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    panda_move::srv::Plan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const panda_move::srv::Plan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<panda_move::srv::Plan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<panda_move::srv::Plan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Plan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Plan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      panda_move::srv::Plan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<panda_move::srv::Plan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<panda_move::srv::Plan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<panda_move::srv::Plan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__panda_move__srv__Plan_Response
    std::shared_ptr<panda_move::srv::Plan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__panda_move__srv__Plan_Response
    std::shared_ptr<panda_move::srv::Plan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Plan_Response_ & other) const
  {
    if (this->execute_state != other.execute_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const Plan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Plan_Response_

// alias to use template instance with default allocator
using Plan_Response =
  panda_move::srv::Plan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace panda_move

namespace panda_move
{

namespace srv
{

struct Plan
{
  using Request = panda_move::srv::Plan_Request;
  using Response = panda_move::srv::Plan_Response;
};

}  // namespace srv

}  // namespace panda_move

#endif  // PANDA_MOVE__SRV__DETAIL__PLAN__STRUCT_HPP_
