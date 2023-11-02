// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_intermediate_interfaces:msg/StartGoal.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__START_GOAL__STRUCT_HPP_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__START_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'start'
// Member 'goal'
#include "my_intermediate_interfaces/msg/detail/coordinates3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__msg__StartGoal __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__msg__StartGoal __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StartGoal_
{
  using Type = StartGoal_<ContainerAllocator>;

  explicit StartGoal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit StartGoal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_type =
    my_intermediate_interfaces::msg::Coordinates3D_<ContainerAllocator>;
  _start_type start;
  using _goal_type =
    my_intermediate_interfaces::msg::Coordinates3D_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__start(
    const my_intermediate_interfaces::msg::Coordinates3D_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__goal(
    const my_intermediate_interfaces::msg::Coordinates3D_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__msg__StartGoal
    std::shared_ptr<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__msg__StartGoal
    std::shared_ptr<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartGoal_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartGoal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartGoal_

// alias to use template instance with default allocator
using StartGoal =
  my_intermediate_interfaces::msg::StartGoal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__START_GOAL__STRUCT_HPP_
