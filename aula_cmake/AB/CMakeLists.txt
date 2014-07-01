cmake_minimum_required(VERSION 2.8)
SET (CMAKE_C_COMPILER "${DEVROOT}/usr/bin/clang")

add_library(AB SHARED a.c b.c)