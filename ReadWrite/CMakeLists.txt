cmake_minimum_required(VERSION 3.21)
project(tutoriumReadWrite)

set(CMAKE_CXX_STANDARD 14)

add_executable(tutoriumReadWrite IoClass.cpp IoClass.h Person.cpp Person.h IoInterface.cpp IoInterface.h main.cpp)
