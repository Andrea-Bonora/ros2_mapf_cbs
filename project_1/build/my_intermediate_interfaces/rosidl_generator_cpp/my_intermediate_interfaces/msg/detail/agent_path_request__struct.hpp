// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_intermediate_interfaces:msg/AgentPathRequest.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__STRUCT_HPP_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__STRUCT_HPP_

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
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'vertex_constraints'
#include "my_intermediate_interfaces/msg/detail/vertex_constraint__struct.hpp"
// Member 'edge_constraints'
#include "my_intermediate_interfaces/msg/detail/edge_constraint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__msg__AgentPathRequest __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__msg__AgentPathRequest __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentPathRequest_
{
  using Type = AgentPathRequest_<ContainerAllocator>;

  explicit AgentPathRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    goal(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit AgentPathRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    start(_alloc, _init),
    goal(_alloc, _init)
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
  using _start_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _start_type start;
  using _goal_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_type goal;
  using _vertex_constraints_type =
    std::vector<my_intermediate_interfaces::msg::VertexConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::VertexConstraint_<ContainerAllocator>>>;
  _vertex_constraints_type vertex_constraints;
  using _edge_constraints_type =
    std::vector<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>>>;
  _edge_constraints_type edge_constraints;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__start(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__vertex_constraints(
    const std::vector<my_intermediate_interfaces::msg::VertexConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::VertexConstraint_<ContainerAllocator>>> & _arg)
  {
    this->vertex_constraints = _arg;
    return *this;
  }
  Type & set__edge_constraints(
    const std::vector<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>>> & _arg)
  {
    this->edge_constraints = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__msg__AgentPathRequest
    std::shared_ptr<my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__msg__AgentPathRequest
    std::shared_ptr<my_intermediate_interfaces::msg::AgentPathRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentPathRequest_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    if (this->vertex_constraints != other.vertex_constraints) {
      return false;
    }
    if (this->edge_constraints != other.edge_constraints) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentPathRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentPathRequest_

// alias to use template instance with default allocator
using AgentPathRequest =
  my_intermediate_interfaces::msg::AgentPathRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__AGENT_PATH_REQUEST__STRUCT_HPP_
