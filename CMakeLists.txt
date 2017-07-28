cmake_minimum_required(VERSION 3.7)
project(practice_c_classes)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/Human.h src/Human.cpp src/Dog.h src/Dog.cpp)
add_executable(practice_c_classes ${SOURCE_FILES})