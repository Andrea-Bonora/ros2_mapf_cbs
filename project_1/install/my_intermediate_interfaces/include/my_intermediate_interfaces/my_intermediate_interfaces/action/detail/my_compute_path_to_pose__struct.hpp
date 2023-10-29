// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_intermediate_interfaces:action/MyComputePathToPose.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__STRUCT_HPP_
#define MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'goal'
// Member 'start'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'vertex_constraints'
#include "my_intermediate_interfaces/msg/detail/vertex_constraint__struct.hpp"
// Member 'edge_constraints'
#include "my_intermediate_interfaces/msg/detail/edge_constraint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Goal __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Goal __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyComputePathToPose_Goal_
{
  using Type = MyComputePathToPose_Goal_<ContainerAllocator>;

  explicit MyComputePathToPose_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_init),
    start(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planner_id = "";
      this->use_start = false;
    }
  }

  explicit MyComputePathToPose_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal(_alloc, _init),
    start(_alloc, _init),
    planner_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->planner_id = "";
      this->use_start = false;
    }
  }

  // field types and members
  using _goal_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _goal_type goal;
  using _start_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _start_type start;
  using _vertex_constraints_type =
    std::vector<my_intermediate_interfaces::msg::VertexConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::VertexConstraint_<ContainerAllocator>>>;
  _vertex_constraints_type vertex_constraints;
  using _edge_constraints_type =
    std::vector<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<my_intermediate_interfaces::msg::EdgeConstraint_<ContainerAllocator>>>;
  _edge_constraints_type edge_constraints;
  using _planner_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _planner_id_type planner_id;
  using _use_start_type =
    bool;
  _use_start_type use_start;

  // setters for named parameter idiom
  Type & set__goal(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }
  Type & set__start(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
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
  Type & set__planner_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->planner_id = _arg;
    return *this;
  }
  Type & set__use_start(
    const bool & _arg)
  {
    this->use_start = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Goal
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Goal
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyComputePathToPose_Goal_ & other) const
  {
    if (this->goal != other.goal) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->vertex_constraints != other.vertex_constraints) {
      return false;
    }
    if (this->edge_constraints != other.edge_constraints) {
      return false;
    }
    if (this->planner_id != other.planner_id) {
      return false;
    }
    if (this->use_start != other.use_start) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyComputePathToPose_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyComputePathToPose_Goal_

// alias to use template instance with default allocator
using MyComputePathToPose_Goal =
  my_intermediate_interfaces::action::MyComputePathToPose_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_intermediate_interfaces


// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__struct.hpp"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Result __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Result __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyComputePathToPose_Result_
{
  using Type = MyComputePathToPose_Result_<ContainerAllocator>;

  explicit MyComputePathToPose_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_init),
    planning_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
    }
  }

  explicit MyComputePathToPose_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc, _init),
    planning_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0;
    }
  }

  // field types and members
  using _path_type =
    nav_msgs::msg::Path_<ContainerAllocator>;
  _path_type path;
  using _planning_time_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _planning_time_type planning_time;
  using _error_code_type =
    uint16_t;
  _error_code_type error_code;

  // setters for named parameter idiom
  Type & set__path(
    const nav_msgs::msg::Path_<ContainerAllocator> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__planning_time(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->planning_time = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t NONE =
    0u;
  static constexpr uint16_t UNKNOWN =
    200u;
  static constexpr uint16_t INVALID_PLANNER =
    201u;
  static constexpr uint16_t TF_ERROR =
    202u;
  static constexpr uint16_t START_OUTSIDE_MAP =
    203u;
  static constexpr uint16_t GOAL_OUTSIDE_MAP =
    204u;
  static constexpr uint16_t START_OCCUPIED =
    205u;
  static constexpr uint16_t GOAL_OCCUPIED =
    206u;
  static constexpr uint16_t TIMEOUT =
    207u;
  static constexpr uint16_t NO_VALID_PATH =
    208u;

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Result
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Result
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyComputePathToPose_Result_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    if (this->planning_time != other.planning_time) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyComputePathToPose_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyComputePathToPose_Result_

// alias to use template instance with default allocator
using MyComputePathToPose_Result =
  my_intermediate_interfaces::action::MyComputePathToPose_Result_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::INVALID_PLANNER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::TF_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::START_OUTSIDE_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::GOAL_OUTSIDE_MAP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::START_OCCUPIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::GOAL_OCCUPIED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t MyComputePathToPose_Result_<ContainerAllocator>::NO_VALID_PATH;
#endif  // __cplusplus < 201703L

}  // namespace action

}  // namespace my_intermediate_interfaces


#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Feedback __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyComputePathToPose_Feedback_
{
  using Type = MyComputePathToPose_Feedback_<ContainerAllocator>;

  explicit MyComputePathToPose_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit MyComputePathToPose_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Feedback
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_Feedback
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyComputePathToPose_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyComputePathToPose_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyComputePathToPose_Feedback_

// alias to use template instance with default allocator
using MyComputePathToPose_Feedback =
  my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_intermediate_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyComputePathToPose_SendGoal_Request_
{
  using Type = MyComputePathToPose_SendGoal_Request_<ContainerAllocator>;

  explicit MyComputePathToPose_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit MyComputePathToPose_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const my_intermediate_interfaces::action::MyComputePathToPose_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Request
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyComputePathToPose_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyComputePathToPose_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyComputePathToPose_SendGoal_Request_

// alias to use template instance with default allocator
using MyComputePathToPose_SendGoal_Request =
  my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_intermediate_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyComputePathToPose_SendGoal_Response_
{
  using Type = MyComputePathToPose_SendGoal_Response_<ContainerAllocator>;

  explicit MyComputePathToPose_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit MyComputePathToPose_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_SendGoal_Response
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyComputePathToPose_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyComputePathToPose_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyComputePathToPose_SendGoal_Response_

// alias to use template instance with default allocator
using MyComputePathToPose_SendGoal_Response =
  my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace my_intermediate_interfaces
{

namespace action
{

struct MyComputePathToPose_SendGoal
{
  using Request = my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Request;
  using Response = my_intermediate_interfaces::action::MyComputePathToPose_SendGoal_Response;
};

}  // namespace action

}  // namespace my_intermediate_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyComputePathToPose_GetResult_Request_
{
  using Type = MyComputePathToPose_GetResult_Request_<ContainerAllocator>;

  explicit MyComputePathToPose_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit MyComputePathToPose_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Request
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyComputePathToPose_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyComputePathToPose_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyComputePathToPose_GetResult_Request_

// alias to use template instance with default allocator
using MyComputePathToPose_GetResult_Request =
  my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_intermediate_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyComputePathToPose_GetResult_Response_
{
  using Type = MyComputePathToPose_GetResult_Response_<ContainerAllocator>;

  explicit MyComputePathToPose_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit MyComputePathToPose_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const my_intermediate_interfaces::action::MyComputePathToPose_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_GetResult_Response
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyComputePathToPose_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyComputePathToPose_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyComputePathToPose_GetResult_Response_

// alias to use template instance with default allocator
using MyComputePathToPose_GetResult_Response =
  my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_intermediate_interfaces

namespace my_intermediate_interfaces
{

namespace action
{

struct MyComputePathToPose_GetResult
{
  using Request = my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Request;
  using Response = my_intermediate_interfaces::action::MyComputePathToPose_GetResult_Response;
};

}  // namespace action

}  // namespace my_intermediate_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "my_intermediate_interfaces/action/detail/my_compute_path_to_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage __declspec(deprecated)
#endif

namespace my_intermediate_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct MyComputePathToPose_FeedbackMessage_
{
  using Type = MyComputePathToPose_FeedbackMessage_<ContainerAllocator>;

  explicit MyComputePathToPose_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit MyComputePathToPose_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const my_intermediate_interfaces::action::MyComputePathToPose_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_intermediate_interfaces__action__MyComputePathToPose_FeedbackMessage
    std::shared_ptr<my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MyComputePathToPose_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const MyComputePathToPose_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MyComputePathToPose_FeedbackMessage_

// alias to use template instance with default allocator
using MyComputePathToPose_FeedbackMessage =
  my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace my_intermediate_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace my_intermediate_interfaces
{

namespace action
{

struct MyComputePathToPose
{
  /// The goal message defined in the action definition.
  using Goal = my_intermediate_interfaces::action::MyComputePathToPose_Goal;
  /// The result message defined in the action definition.
  using Result = my_intermediate_interfaces::action::MyComputePathToPose_Result;
  /// The feedback message defined in the action definition.
  using Feedback = my_intermediate_interfaces::action::MyComputePathToPose_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = my_intermediate_interfaces::action::MyComputePathToPose_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = my_intermediate_interfaces::action::MyComputePathToPose_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = my_intermediate_interfaces::action::MyComputePathToPose_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct MyComputePathToPose MyComputePathToPose;

}  // namespace action

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__ACTION__DETAIL__MY_COMPUTE_PATH_TO_POSE__STRUCT_HPP_
