// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_intermediate_interfaces:msg/VertexConstraint.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__BUILDER_HPP_
#define MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_intermediate_interfaces/msg/detail/vertex_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_intermediate_interfaces
{

namespace msg
{

namespace builder
{

class Init_VertexConstraint_time_step
{
public:
  explicit Init_VertexConstraint_time_step(::my_intermediate_interfaces::msg::VertexConstraint & msg)
  : msg_(msg)
  {}
  ::my_intermediate_interfaces::msg::VertexConstraint time_step(::my_intermediate_interfaces::msg::VertexConstraint::_time_step_type arg)
  {
    msg_.time_step = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::VertexConstraint msg_;
};

class Init_VertexConstraint_cell
{
public:
  Init_VertexConstraint_cell()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VertexConstraint_time_step cell(::my_intermediate_interfaces::msg::VertexConstraint::_cell_type arg)
  {
    msg_.cell = std::move(arg);
    return Init_VertexConstraint_time_step(msg_);
  }

private:
  ::my_intermediate_interfaces::msg::VertexConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_intermediate_interfaces::msg::VertexConstraint>()
{
  return my_intermediate_interfaces::msg::builder::Init_VertexConstraint_cell();
}

}  // namespace my_intermediate_interfaces

#endif  // MY_INTERMEDIATE_INTERFACES__MSG__DETAIL__VERTEX_CONSTRAINT__BUILDER_HPP_
