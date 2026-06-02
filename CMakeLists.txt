cmake_minimum_required(VERSION 3.14)
project(MementoRK2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(memento_test test.cpp Originator.cpp State.cpp Memento.cpp)
target_link_libraries(memento_test gtest gtest_main)
install(TARGETS memento_test DESTINATION /usr/local/bin)
