cmake_minimum_required(VERSION 3.22)
project(interview_practice)
set(CMAKE_CXX_STANDARD 14)

enable_testing()

# fetch google test
include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.tar.gz
)

FetchContent_MakeAvailable(googletest)

add_subdirectory(leetcode)
