cmake_minimum_required(VERSION 3.10)

project(Test)

# Environment Variables
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_EXPORT_COMPILE_COMMANDS True)

# lib
add_subdirectory(lib)


# src
add_executable(Test src/main.cpp)

target_link_libraries(Test PRIVATE lib)

target_include_directories(Test PRIVATE 
    "${PROJECT_SOURCE_DIR}/include"
)