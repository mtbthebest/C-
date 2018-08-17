cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES scripts/cls.inheritance.cpp)

include_directories(include)
include_directories(scripts)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})