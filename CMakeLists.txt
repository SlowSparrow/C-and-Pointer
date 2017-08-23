cmake_minimum_required(VERSION 3.8)
project(CandPointer)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c initial.h chapter6/c6_pointer.c chapter6/c6_p1.c chapter6/c6_p2.c chapter6/c6_p3.c)
add_executable(CandPointer ${SOURCE_FILES})