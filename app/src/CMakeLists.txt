cmake_minimum_required(VERSION 3.1)

set(SOURCES ThreadPool.cpp)

include_directories(../../3dparty/curlpp-0.8.1/include/)

add_library(src ${SOURCES})
target_link_libraries(src curlpp elements)
