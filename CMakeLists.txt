# CMake Minimum Version
cmake_minimum_required(VERSION 3.31)
# Project Name
project("data_interchange" CXX)

# C++ Standard 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# CMake Package Management
find_package(boost 1.88.0 REQUIRED)
find_package(absl 20250512.1 REQUIRED)

# Source Files
file(GLOB SOURCE_FILES ./src/*.cc ./src/*.hh)

# Compiled Source Executable
add_executable("htdi" ${SOURCE_FILES})

