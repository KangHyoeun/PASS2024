cmake_minimum_required(VERSION 3.5)
project(pass)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ThrusterCommand.msg"
  DEPENDENCIES std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

include_directories(include)

add_executable(control src/control.cpp)
ament_target_dependencies(control rclcpp std_msgs)

add_executable(guidance src/guidance.cpp)
ament_target_dependencies(guidance rclcpp std_msgs)

add_executable(navigation src/navigation.cpp)
ament_target_dependencies(navigation rclcpp std_msgs)

install(TARGETS
  control
  guidance
  navigation
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})
install(DIRECTORY config DESTINATION share/${PROJECT_NAME})

ament_package()
