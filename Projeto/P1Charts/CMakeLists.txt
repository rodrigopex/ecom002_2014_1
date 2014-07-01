###############################
# P1Charts configuration file #
###############################

cmake_minimum_required (VERSION 2.8)
project(P1Charts)

SET (CMAKE_C_COMPILER "${DEVROOT}/usr/bin/clang")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")
message(STATUS "Make C flags used: ${CMAKE_C_FLAGS}")

include_directories ("${PROJECT_SOURCE_DIR}/storage")
add_subdirectory (storage)
include_directories ("${PROJECT_SOURCE_DIR}/drawing")
add_subdirectory (drawing)

add_executable(p1charts main.c ./drawing/drawing.c ./storage/storage.c)
target_link_libraries (p1charts Drawing)
target_link_libraries (p1charts Storage)
