cmake_minimum_required(VERSION 3.1)

set(SOURCES ThreadPool.cpp)

include_directories(../../3dparty/curlpp-0.8.1/include/)
include_directories(../../3dparty/nano/include/)
include_directories(${EIGEN3_INCLUDE_DIR})
include_directories(${GLFW3_INCLUDE_DIRS})
include_directories(../3dparty/nano/ext/nanovg/src)


add_library(src ${SOURCES})
target_link_libraries(src curlpp nanogui ${NANOGUI_EXTRA_LIBS})
