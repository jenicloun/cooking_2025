cmake_minimum_required(VERSION 3.5)
project(panda_moveit_config)

find_package(ament_cmake REQUIRED)

ament_package()

# Launch 파일 설치
install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
  PATTERN "setup_assistant.launch" EXCLUDE
)

# Config 파일 설치
install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)
