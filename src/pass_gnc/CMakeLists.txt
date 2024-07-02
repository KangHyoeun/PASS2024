cmake_minimum_required(VERSION 3.5)
project(pass_gnc)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# Include directories
include_directories(
  include
  src/util
)

# Add executable targets
add_executable(guidance src/guidance.cpp)
ament_target_dependencies(guidance rclcpp std_msgs)

add_executable(navigation src/navigation.cpp)
ament_target_dependencies(navigation rclcpp std_msgs)

add_executable(control src/control.cpp)
ament_target_dependencies(control rclcpp std_msgs)

install(TARGETS
  guidance
  navigation
  control
  DESTINATION lib/${PROJECT_NAME})

ament_package()
