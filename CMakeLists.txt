cmake_minimum_required(VERSION 3.9)
project(DS_Assignment3)

set(CMAKE_CXX_STANDARD 11)
include_directories(/home/dev_vrat/CLionProjects/header_files)

set(BUILD_1 Question1)
set(BLD1_FILES stack.cpp)
add_executable(${BUILD_1} ${BLD1_FILES})

set(BUILD_2 Question2)
set(BLD2_FILES main.cpp)
add_executable(${BUILD_2} ${BLD2_FILES})

set(BUILD_3 Other)
set(BLD3_FILES rough.cpp)
add_executable(${BUILD_3} ${BLD3_FILES})
