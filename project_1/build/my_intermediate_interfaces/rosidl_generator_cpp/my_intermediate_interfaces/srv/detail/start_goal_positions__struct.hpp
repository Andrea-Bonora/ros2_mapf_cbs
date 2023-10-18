// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_intermediate_interfaces:srv/StartGoalPositions.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__STRUCT_HPP_
#define MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPositions_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPositions_Request __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartGoalPositions_Request_
{
  using Type = StartGoalPositions_Request_<ContainerAllocator>;

  explicit StartGoalPositions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StartGoalPositions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _start_x_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _start_x_type start_x;
  using _start_y_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _start_y_type start_y;
  using _start_z_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _start_z_type start_z;
  using _end_x_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _end_x_type end_x;
  using _end_y_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _end_y_type end_y;
  using _end_z_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _end_z_type end_z;

  // setters for named parameter idiom
  Type & set__start_x(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->start_x = _arg;
    return *this;
  }
  Type & set__start_y(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->start_y = _arg;
    return *this;
  }
  Type & set__start_z(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->start_z = _arg;
    return *this;
  }
  Type & set__end_x(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->end_x = _arg;
    return *this;
  }
  Type & set__end_y(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->end_y = _arg;
    return *this;
  }
  Type & set__end_z(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->end_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPositions_Request
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPositions_Request
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartGoalPositions_Request_ & other) const
  {
    if (this->start_x != other.start_x) {
      return false;
    }
    if (this->start_y != other.start_y) {
      return false;
    }
    if (this->start_z != other.start_z) {
      return false;
    }
    if (this->end_x != other.end_x) {
      return false;
    }
    if (this->end_y != other.end_y) {
      return false;
    }
    if (this->end_z != other.end_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartGoalPositions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartGoalPositions_Request_

// alias to use template instance with default allocator
using StartGoalPositions_Request =
  my_intermediate_interfaces::srv::StartGoalPositions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_intermediate_interfaces


// Include directives for member types
// Member 'plans'
#include "nav_msgs/msg/detail/path__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPositions_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__srv__StartGoalPositions_Response __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct StartGoalPositions_Response_
{
  using Type = StartGoalPositions_Response_<ContainerAllocator>;

  explicit StartGoalPositions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StartGoalPositions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPositions_Response
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__srv__StartGoalPositions_Response
    std::shared_ptr<my_intermediate_interfaces::srv::StartGoalPositions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StartGoalPositions_Response_ & other) const
  {
    if (this->plans != other.plans) {
      return false;
    }
    return true;
  }
  bool operator!=(const StartGoalPositions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StartGoalPositions_Response_

// alias to use template instance with default allocator
using StartGoalPositions_Response =
  my_intermediate_interfaces::srv::StartGoalPositions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace my_intermediate_interfaces

namespace my_intermediate_interfaces
{

namespace srv
{

struct StartGoalPositions
{
  using Request = my_intermediate_interfaces::srv::StartGoalPositions_Request;
  using Response = my_intermediate_interfaces::srv::StartGoalPositions_Response;
};

}  // namespace srv

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__SRV__DETAIL__START_GOAL_POSITIONS__STRUCT_HPP_
