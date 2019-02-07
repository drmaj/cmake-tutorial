cmake_minimum_required(VERSION 3.10)
project(palindrome_proj)
add_executable(prog main.c)

include(BuildType.cmake)

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

#install(TARGETS prog DESTINATION bin)
