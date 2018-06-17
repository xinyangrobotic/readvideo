cmake_minimum_required(VERSION 3.1)
project(colorextract)

set(CMAKE_CXX_STANDARD 11)
find_package(OpenCV REQUIRED)
add_executable(colorextract main.cpp
        ${OpenCV_INCLUDE_DIRS})
target_link_libraries(colorextract
        ${OpenCV_LIBRARIES})