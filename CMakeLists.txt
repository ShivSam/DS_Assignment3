cmake_minimum_required(VERSION 3.9)
project(DS_Assignment3)

set(CMAKE_CXX_STANDARD 11)
include_directories(/home/dev_vrat/CLionProjects/header_files)

set(BUILD_1A Question1a)
set(BLD1A_FILES stack.cpp)
add_executable(${BUILD_1A} ${BLD1A_FILES})

set(BUILD_1B Question1b)
set(BLD1B_FILES stack.cpp)
add_executable(${BUILD_1B} ${BLD1B_FILES})

set(BUILD_2A Question2a)
set(BLD2A_FILES LinearQ_LL.cpp)
add_executable(${BUILD_2A} ${BLD2A_FILES})

set(BUILD_2B Question2b)
set(BLD2B_FILES CircularQ_LL.cpp)
add_executable(${BUILD_2B} ${BLD2B_FILES})

set(BUILD_2C Question2c)
set(BLD2C_FILES PriorityQ_LL.cpp)
add_executable(${BUILD_2C} ${BLD2C_FILES})

set(BUILD_3 Extra)
set(BLD3_FILES main.cpp rough.cpp)
add_executable(${BUILD_3} ${BLD3_FILES})
