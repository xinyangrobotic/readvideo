cmake_minimum_required(VERSION 3.1)
project(readvideo)

set(CMAKE_CXX_STANDARD 11)
find_package(OpenCV 3.4.3 REQUIRED)
add_executable(readvideo main.cpp
        ${OpenCV_INCLUDE_DIRS})
target_link_libraries(readvideo
        ${OpenCV_LIBRARIES})
