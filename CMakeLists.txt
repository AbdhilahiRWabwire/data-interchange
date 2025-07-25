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
set(CMAKE_C_COMPILER "/usr/bin/clang")
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

# C and C++ Compiler Flags
set(CMAKE_C_FLAGS "-fsanitize-address-use-after-scope" "-fsanitize-address-use-odr-indicator" "-fsanitize-cfi-cross-dso" "-fsanitize-memory-param-retval" "-fsanitize-memory-track-origins" "-fsanitize-memory-use-after-dtor" "-Wall" "-Wextra")
set(CMAKE_CXX_FLAGS "-fsanitize-address-use-after-scope" "-fsanitize-address-use-odr-indicator" "-fsanitize-cfi-cross-dso" "-fsanitize-memory-param-retval" "-fsanitize-memory-track-origins" "-fsanitize-memory-use-after-dtor" "-Wall" "-Wextra")

# Source Files
file(GLOB_RECURSE SOURCE_FILES "./src/*.cc" "./src/*.hh")

# CMake Package Management
include(FetchContent)
FetchContent_Declare(
  "abseil"
  GIT_REPOSITORY "https://github.com/abseil/abseil-cpp.git"
  GIT_TAG        "76bb24329e8bf5f39704eb10d21b9a80befa7c81" # VERSION 20250512.1
)
FetchContent_Declare(
  "boost"
  GIT_REPOSITORY "https://github.com/boostorg/boost.git"
  GIT_TAG        "721cffbbd95856ac9ad5a04300a8e9feaa72b043" # VERSION 1.89.0.beta1
)
FetchContent_Declare(
  "core"
  GIT_REPOSITORY "https://github.com/boostorg/core.git"
  GIT_TAG        "1e1ccb491edeb3a8580b6998c894c07968d4bbb5" # VERSION 1.88.0
)
FetchContent_Declare(
  "smart_ptr"
  GIT_REPOSITORY "https://github.com/boostorg/smart_ptr.git"
  GIT_TAG        "79dac0e691b99e2ba066eba44618ff620a6acfe3" # VERSION 1.89.0.beta1
)
FetchContent_Declare(
  "thread"
  GIT_REPOSITORY "https://github.com/boostorg/thread.git"
  GIT_TAG        "5d68c9c42ca7d3286b534b307c211ef8d7d76631" # VERSION 1.88.0
)
FetchContent_Declare(
  "process"
  GIT_REPOSITORY "https://github.com/boostorg/process.git"
  GIT_TAG        "e637f8483da1d2ae2e4a33dc6732c9dbb198a297" # VERSION 1.88.0
)
FetchContent_Declare(
  "date_time"
  GIT_REPOSITORY "https://github.com/boostorg/date_time.git"
  GIT_TAG        "85e637cb325208c2af9af791c3a1948b4888c6cd" # VERSION 1.88.0
)
FetchContent_Declare(
  "asio"
  GIT_REPOSITORY "https://github.com/boostorg/asio.git"
  GIT_TAG        "8ce699c7d8c10a7d3e6187bc98244d1d2f2958c8" # VERSION 1.88.0
)
FetchContent_Declare(
  "coroutine2"
  GIT_REPOSITORY "https://github.com/boostorg/coroutine2.git"
  GIT_TAG        "dbbf042e0a9081b4119d491b788ae0fe7c03192a" # VERSION 1.88.0
)
FetchContent_Declare(
  "container"
  GIT_REPOSITORY "https://github.com/boostorg/container.git"
  GIT_TAG        "866fd30df1ab723e2104e3de504f4a8c116f2c41" # VERSION 1.88.0
)
FetchContent_Declare(
  "filesystem"
  GIT_REPOSITORY "https://github.com/boostorg/filesystem.git"
  GIT_TAG        "30b312e5c0335831af61ad16802e888f5fb344ea" # VERSION 1.88.0
)
FetchContent_Declare(
  "math"
  GIT_REPOSITORY "https://github.com/boostorg/math.git"
  GIT_TAG        "529f3a759d83aa9437613666ea6293c9336d4069" # VERSION 1.88.0
)
FetchContent_Declare(
  "log"
  GIT_REPOSITORY "https://github.com/boostorg/log.git"
  GIT_TAG        "724e888b5a558f8dc3db64b4397ce23f83baa53e" # VERSION 1.88.0
)
FetchContent_Declare(
  "stacktrace"
  GIT_REPOSITORY "https://github.com/boostorg/stacktrace.git"
  GIT_TAG        "d6499f26d471158b6e6f65eea7425200f842b547" # VERSION 1.88.0
)
FetchContent_Declare(
  "beast"
  GIT_REPOSITORY "https://github.com/boostorg/beast.git"
  GIT_TAG        "1d8dfae490125bd63efedfa7a3ecf20e8e9b54a5" # VERSION 1.88.0
)
FetchContent_Declare(
  "url"
  GIT_REPOSITORY "https://github.com/boostorg/url.git"
  GIT_TAG        "eac774af78faa3ee5f86dc638eb6cd02482d6c35" # VERSION 1.88.0
)
FetchContent_Declare(
  "serialization"
  GIT_REPOSITORY "https://github.com/boostorg/serialization.git"
  GIT_TAG        "a20c4d97c37e5f437c8ba78f296830edb79cff9e" # VERSION 1.88.0
)
FetchContent_Declare(
  "json"
  GIT_REPOSITORY "https://github.com/boostorg/json.git"
  GIT_TAG        "0b1048adf7571b42ae9f684b63e4383241b9e4a1" # VERSION 1.88.0
)
FetchContent_Declare(
  "test"
  GIT_REPOSITORY "https://github.com/boostorg/test.git"
  GIT_TAG        "cfd3a7e8749752f5a9d20266c1fc7afdb9b1e173" # VERSION 1.88.0
)
FetchContent_Declare(
  "openssl"
  GIT_REPOSITORY "https://github.com/openssl/openssl.git"
  GIT_TAG        "aea7aaf2abb04789f5868cbabec406ea43aa84bf" # VERSION 3.5.1
)
FetchContent_Declare(
  "libzip"
  GIT_REPOSITORY "https://github.com/nih-at/libzip.git"
  GIT_TAG        "6f8a0cdd24a0dc6cce9dac4a7679da784ab124ea" # VERSION 1.88.0
)
FetchContent_MakeAvailable("abseil" "boost" "openssl" "libzip")

# Compiled So88ce Executable
add_executable("htdi" ${SOURCE_FILES})

# Linked Libraries
target_link_libraries("htdi" "abseil")
target_link_libraries("htdi" "boost")
target_link_libraries("htdi" "openssl")
target_link_libraries("htdi" "libzip")

