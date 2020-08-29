cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(curlpp-0.8.1)
add_subdirectory(nano)

include_directories(${RACE01_EIGEN3_INCLUDE_DIR})
