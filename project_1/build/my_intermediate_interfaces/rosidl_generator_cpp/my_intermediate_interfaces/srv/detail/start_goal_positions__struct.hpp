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


// Include directives for member types
// Member 'requests'
#include "my_intermediate_interfaces/msg/detail/start_goal__struct.hpp"

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
  using _requests_type =
    std::vector<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>>>;
  _requests_type requests;

  // setters for named parameter idiom
  Type & set__requests(
    const std::vector<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::StartGoal_<ContainerAllocator>>> & _arg)
  {
    this->requests = _arg;
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
    if (this->requests != other.requests) {
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
#include "my_intermediate_interfaces/msg/detail/agent_path__struct.hpp"

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
    std::vector<my_intermediate_interfaces::msg::AgentPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::AgentPath_<ContainerAllocator>>>;
  _plans_type plans;

  // setters for named parameter idiom
  Type & set__plans(
    const std::vector<my_intermediate_interfaces::msg::AgentPath_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::AgentPath_<ContainerAllocator>>> & _arg)
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
