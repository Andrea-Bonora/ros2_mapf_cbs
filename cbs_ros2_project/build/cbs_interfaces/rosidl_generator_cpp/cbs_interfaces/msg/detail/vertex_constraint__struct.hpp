// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cbs_interfaces:msg/VertexConstraint.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__STRUCT_HPP_
#define CBS_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cbs_interfaces__msg__VertexConstraint __attribute__((deprecated))
#else
# define DEPRECATED__cbs_interfaces__msg__VertexConstraint __declspec(deprecated)
#endif

namespace cbs_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VertexConstraint_
{
  using Type = VertexConstraint_<ContainerAllocator>;

  explicit VertexConstraint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_index = 0ll;
      this->time_step = 0ll;
    }
  }

  explicit VertexConstraint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cell_index = 0ll;
      this->time_step = 0ll;
    }
  }

  // field types and members
  using _cell_index_type =
    int64_t;
  _cell_index_type cell_index;
  using _time_step_type =
    int64_t;
  _time_step_type time_step;

  // setters for named parameter idiom
  Type & set__cell_index(
    const int64_t & _arg)
  {
    this->cell_index = _arg;
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
    cbs_interfaces::msg::VertexConstraint_<ContainerAllocator> *;
  using ConstRawPtr =
    const cbs_interfaces::msg::VertexConstraint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cbs_interfaces::msg::VertexConstraint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cbs_interfaces::msg::VertexConstraint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cbs_interfaces::msg::VertexConstraint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cbs_interfaces::msg::VertexConstraint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cbs_interfaces::msg::VertexConstraint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cbs_interfaces::msg::VertexConstraint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cbs_interfaces::msg::VertexConstraint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cbs_interfaces::msg::VertexConstraint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cbs_interfaces__msg__VertexConstraint
    std::shared_ptr<cbs_interfaces::msg::VertexConstraint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cbs_interfaces__msg__VertexConstraint
    std::shared_ptr<cbs_interfaces::msg::VertexConstraint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VertexConstraint_ & other) const
  {
    if (this->cell_index != other.cell_index) {
      return false;
    }
    if (this->time_step != other.time_step) {
      return false;
    }
    return true;
  }
  bool operator!=(const VertexConstraint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VertexConstraint_

// alias to use template instance with default allocator
using VertexConstraint =
  cbs_interfaces::msg::VertexConstraint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__STRUCT_HPP_
