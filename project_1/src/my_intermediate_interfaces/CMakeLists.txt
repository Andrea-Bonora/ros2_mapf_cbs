cmake_minimum_required(VERSION 3.8)
project(my_intermediate_interfaces)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(std_srvs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav2_msgs REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/StartGoalPoseStamped.srv"  
  "srv/StartGoalPositions.srv"
  "srv/ComputedPlans.srv"
  "msg/AgentPathRequest.msg"
  "msg/AgentPath.msg"
  "msg/VertexConstraint.msg"
  "msg/EdgeConstraint.msg"
  "msg/Coordinates3D.msg"
  "msg/StartGoal.msg"
  "action/MyComputePathToPose.action"
  DEPENDENCIES nav_msgs
  DEPENDENCIES nav2_msgs
  DEPENDENCIES geometry_msgs
  DEPENDENCIES std_msgs
)

ament_package()
