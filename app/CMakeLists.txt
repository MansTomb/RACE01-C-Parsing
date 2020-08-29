cmake_minimum_required(VERSION 3.1)

project(race01 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(SOURCE_EXE main.cpp)
add_subdirectory(src)

include_directories(../3dparty/nuklear/)
include_directories(../3dparty/curlpp-0.8.1/include/)

add_compile_options(
        -std=c++17
#        -Werror
#        -Wall
#        -Wextra
#        -Wpedantic
        -Wno-unused-parameter
)

add_executable(race01 ${SOURCE_EXE})
target_link_libraries(race01 nuklear curlpp)
include_directories(race01)
