cmake_minimum_required(VERSION 3.20)
project(MyLib C)

set(CMAKE_C_STANDARD 11)

add_library(MyLib include/MyLib/array/array.h src/array/array.c)
