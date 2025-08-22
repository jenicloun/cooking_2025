# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_panda_move_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED panda_move_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(panda_move_FOUND FALSE)
  elseif(NOT panda_move_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(panda_move_FOUND FALSE)
  endif()
  return()
endif()
set(_panda_move_CONFIG_INCLUDED TRUE)

# output package information
if(NOT panda_move_FIND_QUIETLY)
  message(STATUS "Found panda_move: 0.0.0 (${panda_move_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'panda_move' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${panda_move_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(panda_move_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${panda_move_DIR}/${_extra}")
endforeach()
