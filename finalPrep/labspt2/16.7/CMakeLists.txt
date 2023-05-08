cmake_minimum_required(VERSION 3.23)
project(16_7)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(16_7
        16.7.cpp
        NegativeScore.h
        TestScores.cpp
        TestScores.h)
