set(CMAKE_EXPORT_COMPILE_COMMANDS True)

add_library(lib lib.cpp)

target_include_directories(lib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})