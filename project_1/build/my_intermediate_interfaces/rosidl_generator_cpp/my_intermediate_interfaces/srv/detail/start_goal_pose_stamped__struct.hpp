// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__STRUCT_HPP_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'starts'
// Member 'goals'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPoseStamped_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPoseStamped_Request __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartGoalPoseStamped_Request_
{
  using Type = StartGoalPoseStamped_Request_<ContainerAllocator>;

  explicit StartGoalPoseStamped_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StartGoalPoseStamped_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _starts_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _starts_type starts;
  using _goals_type =
    std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>>;
  _goals_type goals;

  // setters for named parameter idiom
  Type & set__starts(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->starts = _arg;
    return *this;
  }
  Type & set__goals(
    const std::vector<geometry_msgs::msg::PoseStamped_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::PoseStamped_<ContainerAllocator>>> & _arg)
  {
    this->goals = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPoseStamped_Request
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPoseStamped_Request
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartGoalPoseStamped_Request_ & other) const
  {
    if (this->starts != other.starts) {
      return false;
    }
    if (this->goals != other.goals) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartGoalPoseStamped_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartGoalPoseStamped_Request_

// alias to use template instance with default allocator
using StartGoalPoseStamped_Request =
  my_intermediate_interfaces::srv::StartGoalPoseStamped_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_intermediate_interfaces


// Include directives for member types
// Member 'plans'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPoseStamped_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPoseStamped_Response __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartGoalPoseStamped_Response_
{
  using Type = StartGoalPoseStamped_Response_<ContainerAllocator>;

  explicit StartGoalPoseStamped_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StartGoalPoseStamped_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _plans_type =
    std::vector<nav_msgs::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav_msgs::msg::Path_<ContainerAllocator>>>;
  _plans_type plans;

  // setters for named parameter idiom
  Type & set__plans(
    const std::vector<nav_msgs::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav_msgs::msg::Path_<ContainerAllocator>>> & _arg)
  {
    this->plans = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPoseStamped_Response
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPoseStamped_Response
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartGoalPoseStamped_Response_ & other) const
  {
    if (this->plans != other.plans) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartGoalPoseStamped_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartGoalPoseStamped_Response_

// alias to use template instance with default allocator
using StartGoalPoseStamped_Response =
  my_intermediate_interfaces::srv::StartGoalPoseStamped_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_intermediate_interfaces

namespace my_intermediate_interfaces
{

namespace srv
{

struct StartGoalPoseStamped
{
  using Request = my_intermediate_interfaces::srv::StartGoalPoseStamped_Request;
  using Response = my_intermediate_interfaces::srv::StartGoalPoseStamped_Response;
};

}  // namespace srv

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSE_STAMPED__STRUCT_HPP_
