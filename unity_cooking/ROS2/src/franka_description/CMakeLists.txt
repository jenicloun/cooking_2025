cmake_minimum_required(VERSION 3.5)
project(franka_description)

find_package(ament_cmake REQUIRED)
find_package(xacro REQUIRED)

ament_package(
  # ROS2에서는 특별히 CATKIN_DEPENDS는 필요 없음
)

# meshes 디렉토리 설치
install(DIRECTORY meshes
  DESTINATION share/${PROJECT_NAME}
)

# robots 디렉토리 설치
install(DIRECTORY robots
  DESTINATION share/${PROJECT_NAME}
)
