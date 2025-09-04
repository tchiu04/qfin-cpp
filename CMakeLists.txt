cmake_minimum_required(VERSION 3.20)
project(qfin_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#headers
include_directories(${CMAKE_SOURCE_DIR}/include)

#main executable
add_executable(qfin_example src/main.cpp)

#test with Catch2
include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.6.0
)
FetchContent_MakeAvailable(Catch2)

# Define test executable
add_executable(qfin_tests
  tests/test_util.cpp
)

target_link_libraries(qfin_tests PRIVATE Catch2::Catch2WithMain)

# Enable test discovery (so `ctest` finds them)
include(CTest)
include(Catch)
catch_discover_tests(qfin_tests)