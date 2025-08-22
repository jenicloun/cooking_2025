cmake_minimum_required(VERSION 3.5)
project(ros_tcp_endpoint)

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

###################################
## 메시지 및 서비스 생성
###################################
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/RosUnityError.msg"
  "msg/RosUnitySrvMessage.msg"
  "msg/RosUnitySysCommand.msg"

  "srv/RosUnityTopicList.srv"

  DEPENDENCIES std_msgs
)

###################################
## Python 스크립트 설치
###################################
install(
  DIRECTORY ./
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
