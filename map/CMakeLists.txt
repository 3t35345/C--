cmake_minimum_required(VERSION 3.22)
project(map)

set(CMAKE_CXX_STANDARD 20)

add_executable(map main.cpp
        FrequencyCounting.cpp
        FrequencyCounting.h
        TheTwoSum.cpp
        TheTwoSum.h
        TheTwoSum.h)
