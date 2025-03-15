cmake_minimum_required(VERSION 3.30)
project(Algorithm)

set(CMAKE_CXX_STANDARD 20)

add_executable(Algorithm main.cpp
        sort/heap_sort.cpp
        sort/heap_sort.h
)
