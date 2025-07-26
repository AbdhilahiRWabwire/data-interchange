# CMake Minimum Version
cmake_minimum_required(VERSION "3.31")

# Project Name
project(
  "data_interchange"
  VERSION "0.2.0"
  DESCRIPTION "Data Interchange Format and Network Protocol Implementations"
  LANGUAGES "C" "CXX"
)

# C Standard 17
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED true)

# C++ Standard 20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

# C and C++ Compilers
set(CMAKE_C_COMPILER "/usr/bin/gcc")
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

# C and C++ Compiler Flags
set(CMAKE_C_FLAGS "-Wall" "-Wextra")
set(CMAKE_CXX_FLAGS "-Wall" "-Wextra")

# Abseil Library Name
set(LIB_ABSEIL "abseil")

# Boost Library Name
set(LIB_BOOST "boost")

# Open Secure Socket Layer Library Name
set(LIB_OPENSSL "openssl")

# Zip Library Name
set(LIB_ZIP "libzip")

# CMake Package Management
include(FetchContent)
FetchContent_Declare(
  ${LIB_ABSEIL}  
  GIT_REPOSITORY "https://github.com/abseil/abseil-cpp.git"
  GIT_TAG        "76bb24329e8bf5f39704eb10d21b9a80befa7c81" # VERSION 20250512.1
)
FetchContent_Declare(
 ${LIB_BOOST}   
  GIT_REPOSITORY "https://github.com/boostorg/boost.git"
  GIT_TAG        "721cffbbd95856ac9ad5a04300a8e9feaa72b043" # VERSION 1.89.0.beta1
)
FetchContent_Declare(
  ${LIB_OPENSSL}   
  GIT_REPOSITORY "https://github.com/openssl/openssl.git"
  GIT_TAG        "aea7aaf2abb04789f5868cbabec406ea43aa84bf" # VERSION 3.5.1
)
FetchContent_Declare(
  ${LIB_ZIP}   
  GIT_REPOSITORY "https://github.com/nih-at/libzip.git"
  GIT_TAG        "6f8a0cdd24a0dc6cce9dac4a7679da784ab124ea" # VERSION 1.88.0
)
FetchContent_MakeAvailable(${LIB_ABSEIL} ${LIB_BOOST} ${LIB_OPENSSL} ${LIB_ZIP})

# Source Executable Name
set(SOURCE_EXECUTABLE "htdi")

# Source Files
file(GLOB_RECURSE SOURCE_FILES "./src/*.cc")

# Header Files
file(GLOB_RECURSE HEADER_FILES "./src/*.hh")

# Precompiled Header Files
file(GLOB_RECURSE PRECOMPILED_HEADER_FILES "./src/*.pch")

# Add Executable
add_executable(${SOURCE_EXECUTABLE})

# Target Compile Options
target_compile_options(
  ${SOURCE_EXECUTABLE}
  CMAKE_C_COMPILER "/usr/bin/clang"
  CMAKE_CXX_COMPILER "/usr/bin/clang++"
  CMAKE_C_FLAGS "-fsanitize-address-use-after-scope" "-fsanitize-address-use-odr-indicator" "-fsanitize-cfi-cross-dso" "-fsanitize-memory-param-retval" "-fsanitize-memory-track-origins" "-fsanitize-memory-use-after-dtor" "-Wall" "-Wextra"
  CMAKE_CXX_FLAGS "-fsanitize-address-use-after-scope" "-fsanitize-address-use-odr-indicator" "-fsanitize-cfi-cross-dso" "-fsanitize-memory-param-retval" "-fsanitize-memory-track-origins" "-fsanitize-memory-use-after-dtor" "-Wall" "-Wextra"
)

# Target Precompile Headers
target_precompile_headers(${SOURCE_EXECUTABLE} ${HEADER_FILES})

# Target Sources
target_sources(${SOURCE_EXECUTABLE} ${SOURCE_FILES} ${PRECOMPILED_HEADER_FILES})

# Target Link Libraries
target_link_libraries(${SOURCE_EXECUTABLE} ${LIB_ABSEIL})
target_link_libraries(${SOURCE_EXECUTABLE} ${LIB_BOOST})
target_link_libraries(${SOURCE_EXECUTABLE} ${LIB_OPENSSL})
target_link_libraries(${SOURCE_EXECUTABLE} ${LIB_ZIP})

