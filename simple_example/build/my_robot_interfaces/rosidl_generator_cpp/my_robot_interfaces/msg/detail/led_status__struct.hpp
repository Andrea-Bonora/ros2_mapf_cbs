// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:msg/LedStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATUS__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__msg__LedStatus __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__msg__LedStatus __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LedStatus_
{
  using Type = LedStatus_<ContainerAllocator>;

  explicit LedStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led1 = "";
      this->led2 = "";
      this->led3 = "";
    }
  }

  explicit LedStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led1(_alloc),
    led2(_alloc),
    led3(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led1 = "";
      this->led2 = "";
      this->led3 = "";
    }
  }

  // field types and members
  using _led1_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _led1_type led1;
  using _led2_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _led2_type led2;
  using _led3_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _led3_type led3;

  // setters for named parameter idiom
  Type & set__led1(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->led1 = _arg;
    return *this;
  }
  Type & set__led2(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->led2 = _arg;
    return *this;
  }
  Type & set__led3(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->led3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::msg::LedStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::msg::LedStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::LedStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::LedStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::LedStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::LedStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::LedStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::LedStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::LedStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::LedStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__msg__LedStatus
    std::shared_ptr<my_robot_interfaces::msg::LedStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__msg__LedStatus
    std::shared_ptr<my_robot_interfaces::msg::LedStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedStatus_ & other) const
  {
    if (this->led1 != other.led1) {
      return false;
    }
    if (this->led2 != other.led2) {
      return false;
    }
    if (this->led3 != other.led3) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedStatus_

// alias to use template instance with default allocator
using LedStatus =
  my_robot_interfaces::msg::LedStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__LED_STATUS__STRUCT_HPP_
