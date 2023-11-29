// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cbs_interfaces:msg/AgentPath.idl
// generated code does not contain a copyright notice

#ifndef CBS_INTERFACES__MSG__DETAIL__AGENT_PATH__STRUCT_HPP_
#define CBS_INTERFACES__MSG__DETAIL__AGENT_PATH__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cbs_interfaces__msg__AgentPath __attribute__((deprecated))
#else
# define DEPRECATED__cbs_interfaces__msg__AgentPath __declspec(deprecated)
#endif

namespace cbs_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentPath_
{
  using Type = AgentPath_<ContainerAllocator>;

  explicit AgentPath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit AgentPath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    path(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _path_type path;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cbs_interfaces::msg::AgentPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const cbs_interfaces::msg::AgentPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cbs_interfaces::msg::AgentPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cbs_interfaces::msg::AgentPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cbs_interfaces::msg::AgentPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cbs_interfaces::msg::AgentPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cbs_interfaces::msg::AgentPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cbs_interfaces::msg::AgentPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cbs_interfaces::msg::AgentPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cbs_interfaces::msg::AgentPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cbs_interfaces__msg__AgentPath
    std::shared_ptr<cbs_interfaces::msg::AgentPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cbs_interfaces__msg__AgentPath
    std::shared_ptr<cbs_interfaces::msg::AgentPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentPath_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentPath_

// alias to use template instance with default allocator
using AgentPath =
  cbs_interfaces::msg::AgentPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cbs_interfaces

#endif  // CBS_INTERFACES__MSG__DETAIL__AGENT_PATH__STRUCT_HPP_
