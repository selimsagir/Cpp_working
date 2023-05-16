cmake_minimum_required(VERSION 3.22)

project(CProject VERSION 1.0.0 LANGUAGES CXX)

add_library(MyLibrary STATIC stack_s.cpp)

add_executable(Executable main.cpp)

target_link_libraries(Executable PUBLIC MyLibrary)