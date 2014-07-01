##################################
# Drawing lib configuration file #
##################################

cmake_minimum_required (VERSION 2.6)
SET (CMAKE_C_COMPILER "${DEVROOT}/usr/bin/clang")

#add_library(Drawing SHARED drawing.c)
#target_link_libraries (Drawing m)
#target_link_libraries (Drawing cairo)

#add_executable(test drawing.c drawingTest.c)
#target_link_libraries (test m)
#target_link_libraries (test cairo)

add_executable(test drawingTest.c)
#target_link_libraries (test m)
target_link_libraries (test cairo)

