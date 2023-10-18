// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPosedStamped.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSED_STAMPED__STRUCT_HPP_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSED_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'plans'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPosedStamped_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPosedStamped_Request __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartGoalPosedStamped_Request_
{
  using Type = StartGoalPosedStamped_Request_<ContainerAllocator>;

  explicit StartGoalPosedStamped_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StartGoalPosedStamped_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPosedStamped_Request
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPosedStamped_Request
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartGoalPosedStamped_Request_ & other) const
  {
    if (this->plans != other.plans) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartGoalPosedStamped_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartGoalPosedStamped_Request_

// alias to use template instance with default allocator
using StartGoalPosedStamped_Request =
  my_intermediate_interfaces::srv::StartGoalPosedStamped_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_intermediate_interfaces


// Include directives for member types
// Member 'collision_free_plans'
// already included above
// #include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPosedStamped_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPosedStamped_Response __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartGoalPosedStamped_Response_
{
  using Type = StartGoalPosedStamped_Response_<ContainerAllocator>;

  explicit StartGoalPosedStamped_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StartGoalPosedStamped_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _collision_free_plans_type =
    std::vector<nav_msgs::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav_msgs::msg::Path_<ContainerAllocator>>>;
  _collision_free_plans_type collision_free_plans;

  // setters for named parameter idiom
  Type & set__collision_free_plans(
    const std::vector<nav_msgs::msg::Path_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav_msgs::msg::Path_<ContainerAllocator>>> & _arg)
  {
    this->collision_free_plans = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPosedStamped_Response
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPosedStamped_Response
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartGoalPosedStamped_Response_ & other) const
  {
    if (this->collision_free_plans != other.collision_free_plans) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartGoalPosedStamped_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartGoalPosedStamped_Response_

// alias to use template instance with default allocator
using StartGoalPosedStamped_Response =
  my_intermediate_interfaces::srv::StartGoalPosedStamped_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_intermediate_interfaces

namespace my_intermediate_interfaces
{

namespace srv
{

struct StartGoalPosedStamped
{
  using Request = my_intermediate_interfaces::srv::StartGoalPosedStamped_Request;
  using Response = my_intermediate_interfaces::srv::StartGoalPosedStamped_Response;
};

}  // namespace srv

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSED_STAMPED__STRUCT_HPP_
