cmake_minimum_required(VERSION 3.31..4.00)
project("data_interchange" CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

file(GLOB SOURCE_FILES ./src/*.cc ./src/*.hh)

add_executable("htdi" ${SOURCE_FILES})

