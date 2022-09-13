cmake_minimum_required(VERSION 3.10)
project(intern)

add_library(hanoi ./lib/Hanoi_2.cpp ./include/Hanoi_2.h)
target_include_directories(hanoi PUBLIC ./include)

add_executable(main ./src/Hanoi_1.cpp)
target_link_libraries(main hanoi)