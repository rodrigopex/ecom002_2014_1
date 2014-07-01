cmake_minimum_required(VERSION 2.8)
project (HelloWorld)
SET (CMAKE_C_COMPILER "${DEVROOT}/usr/bin/clang")

include_directories ("${PROJECT_SOURCE_DIR}/AB")
add_subdirectory (AB)

add_executable(test main.c)
target_link_libraries (test AB)