cmake_minimum_required(VERSION 3.10)
project(palindrome_proj)
add_executable(prog main.c palindrome.c palindrome.h)
include(BuildType.cmake)

#install(TARGETS prog DESTINATION bin)
