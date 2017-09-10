cmake_minimum_required(VERSION 3.8)
project(CandPointer)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c initial.h chapter6/c6_pointer.c chapter6/c6_p1.c chapter6/c6_p2.c chapter6/c6_p3.c chapter7/btoa.c chapter7/c7_p1.c chapter8/c8_p1.c chapter8/c8_p5.c chapter8/c8_p8.c chapter9/c9_p1.c chapter9/c9_p11.c chapter9/c9_p12.c chapter9/c9_p15.c chapter10/c10_p1.c chapter11/sort.c chapter11/c11_p2.c chapter12/c12.c chapter12/double_list.c chapter13/mystery.c)
add_executable(CandPointer ${SOURCE_FILES})