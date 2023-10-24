// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_intermediate_interfaces:msg/EdgeConstraint.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__STRUCT_HPP_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'starting_cell'
// Member 'goal_cell'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__msg__EdgeConstraint __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__msg__EdgeConstraint __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EdgeConstraint_
{
  using Type = EdgeConstraint_<ContainerAllocator>;

  explicit EdgeConstraint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : starting_cell(_init),
    goal_cell(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_step = 0ll;
    }
  }

  explicit EdgeConstraint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : starting_cell(_alloc, _init),
    goal_cell(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_step = 0ll;
    }
  }

  // field types and members
  using _starting_cell_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _starting_cell_type starting_cell;
  using _goal_cell_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_cell_type goal_cell;
  using _time_step_type =
    int64_t;
  _time_step_type time_step;

  // setters for named parameter idiom
  Type & set__starting_cell(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->starting_cell = _arg;
    return *this;
  }
  Type & set__goal_cell(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal_cell = _arg;
    return *this;
  }
  Type & set__time_step(
    const int64_t & _arg)
  {
    this->time_step = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__msg__EdgeConstraint
    std::shared_ptr<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__msg__EdgeConstraint
    std::shared_ptr<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EdgeConstraint_ & other) const
  {
    if (this->starting_cell != other.starting_cell) {
      return false;
    }
    if (this->goal_cell != other.goal_cell) {
      return false;
    }
    if (this->time_step != other.time_step) {
      return false;
    }
    return true;
  }
  bool operator!=(const EdgeConstraint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EdgeConstraint_

// alias to use template instance with default allocator
using EdgeConstraint =
  my_intermediate_interfaces::msg::EdgeConstraint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__EDGE_CONSTRAINT__STRUCT_HPP_
