# CMake Minimum Version
cmake_minimum_required(VERSION 3.31)

# Project Name
project("data_interchange" C CXX)

# C Standard 17
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED true)

# C++ Standard 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# C and C++ Compilers
set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

# C and C++ Compiler Flags
set(CMAKE_C_FLAGS "-fsanitize-address-use-after-scope -fsanitize-address-use-odr-indicator -fsanitize-cfi-cross-dso -fsanitize-memory-param-retval -fsanitize-memory-track-origins -fsanitize-memory-use-after-dtor -Wall -Wextra")
set(CMAKE_CXX_FLAGS "-fsanitize-address-use-after-scope -fsanitize-address-use-odr-indicator -fsanitize-cfi-cross-dso -fsanitize-memory-param-retval -fsanitize-memory-track-origins -fsanitize-memory-use-after-dtor -Wall -Wextra")

# Source Files
file(GLOB_RECURSE SOURCE_FILES "./src/*.cc" "./src/*.hh")

# Include Libraries
target_link_libraries(${PROJECT_NAME} PUBLIC boost)
target_link_libraries(${PROJECT_NAME} PUBLIC absl)
target_link_libraries(${PROJECT_NAME} PUBLIC openssl)
target_link_libraries(${PROJECT_NAME} PUBLIC zlib)

# Compiled Source Executable
add_executable("htdi" ${SOURCE_FILES})

