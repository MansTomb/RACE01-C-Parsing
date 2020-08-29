cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT MYPROJ_EIGEN3_INCLUDE_DIR)
    # Grab or find the Eigen3 include directory.
    find_package(Eigen3 QUIET)
    message(STATUS "${EIGEN3_INCLUDE_DIR}")
    # use the internal NanoGUI copy of Eigen
    set(EIGEN3_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/3dparty/nano/ext/eigen)
endif()

message(STATUS "Using Eigen3 from directory: ${EIGEN3_INCLUDE_DIR}")
set(NANOGUI_EIGEN_INCLUDE_DIR ${EIGEN3_INCLUDE_DIR} CACHE BOOL " " FORCE)

set(GLFW3_FOUND ON)
set(GLFW3_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/3dparty/nano/ext/glfw/include/)
set(GLFW3_LIBRARIES $<TARGET_FILE:nanogui>)

set(GLFW3_FOUND ON)
set(GLFW3_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR}/3dparty/nano/ext/glfw/include/)
set(GLFW3_LIBRARIES $<TARGET_FILE:nanogui>)

add_subdirectory(3dparty)
add_subdirectory(app)

include_directories(${EIGEN3_INCLUDE_DIR})
