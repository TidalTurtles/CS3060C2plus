cmake_minimum_required(VERSION 3.23)
project(15_7)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(15_7
        15.7.cpp
        CustomerData.h
        PersonData.h)
