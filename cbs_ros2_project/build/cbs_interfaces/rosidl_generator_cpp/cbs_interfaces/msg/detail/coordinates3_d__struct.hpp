// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cbs_interfaces:msg/Coordinates3D.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__COORDINATES3_D__STRUCT_HPP_
#define CBS_INTERFACES__MSG__DETAIL__COORDINATES3_D__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cbs_interfaces__msg__Coordinates3D __attribute__((deprecated))
#else
# define DEPRECATED__cbs_interfaces__msg__Coordinates3D __declspec(deprecated)
#endif

namespace cbs_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Coordinates3D_
{
  using Type = Coordinates3D_<ContainerAllocator>;

  explicit Coordinates3D_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  explicit Coordinates3D_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cbs_interfaces::msg::Coordinates3D_<ContainerAllocator> *;
  using ConstRawPtr =
    const cbs_interfaces::msg::Coordinates3D_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cbs_interfaces::msg::Coordinates3D_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cbs_interfaces::msg::Coordinates3D_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cbs_interfaces::msg::Coordinates3D_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cbs_interfaces::msg::Coordinates3D_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cbs_interfaces::msg::Coordinates3D_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cbs_interfaces::msg::Coordinates3D_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cbs_interfaces::msg::Coordinates3D_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cbs_interfaces::msg::Coordinates3D_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cbs_interfaces__msg__Coordinates3D
    std::shared_ptr<cbs_interfaces::msg::Coordinates3D_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cbs_interfaces__msg__Coordinates3D
    std::shared_ptr<cbs_interfaces::msg::Coordinates3D_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coordinates3D_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coordinates3D_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coordinates3D_

// alias to use template instance with default allocator
using Coordinates3D =
  cbs_interfaces::msg::Coordinates3D_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__MSG__DETAIL__COORDINATES3_D__STRUCT_HPP_
