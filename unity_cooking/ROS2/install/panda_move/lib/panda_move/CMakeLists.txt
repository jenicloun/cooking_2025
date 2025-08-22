cmake_minimum_required(VERSION 3.8)
project(panda_move)

# C++11 지원
# set(CMAKE_CXX_STANDARD 11)

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(ros_tcp_endpoint REQUIRED)
find_package(moveit_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(controller_manager REQUIRED)
find_package(trajectory_msgs REQUIRED)
find_package(moveit_core REQUIRED)
find_package(moveit_ros_planning REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(moveit_ros_perception REQUIRED)

###################################
## 메시지 및 서비스 생성
###################################
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Action.msg"
  "msg/Predicate.msg"
  "msg/ExecutionCheck.msg"
  
  "srv/Init.srv"
  "srv/Sync.srv"
  "srv/Plan.srv"
  "srv/Hand.srv"
  "srv/MotionCheck.srv"
  "srv/ActionSequences.srv"
  "srv/NewState.srv"
  
  DEPENDENCIES std_msgs geometry_msgs moveit_msgs sensor_msgs
)

###################################
## Python 스크립트 설치
###################################
install(
  DIRECTORY ./
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
