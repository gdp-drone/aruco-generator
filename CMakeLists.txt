cmake_minimum_required(VERSION 3.13)
project(aruco_generator)

find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)
target_link_libraries(main ${OpenCV_LIBS})