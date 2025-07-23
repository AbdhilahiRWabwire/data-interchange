set(CMAKE_SYSTEM_NAME Darwin)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

set(target_triple x86_64-apple-darwin)

set(CMAKE_C_COMPILER clang)
set(CMAKE_C_COMPILER_TARGET ${target_triple})
set(CMAKE_CXX_COMPILER clang++)
set(CMAKE_CXX_COMPILER_TARGET ${target_triple})
set(CMAKE_C_FLAGS "-fsanitize-address-use-after-scope -fsanitize-address-use-odr-indicator -fsanitize-cfi-cross-dso -fsanitize-memory-param-retval -fsanitize-memory-track-origins -fsanitize-memory-use-after-dtor -Wall -Wextra")
set(CMAKE_CXX_FLAGS "-fsanitize-address-use-after-scope -fsanitize-address-use-odr-indicator -fsanitize-cfi-cross-dso -fsanitize-memory-param-retval -fsanitize-memory-track-origins -fsanitize-memory-use-after-dtor -Wall -Wextra")
