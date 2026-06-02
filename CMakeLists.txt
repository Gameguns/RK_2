cmake_minimum_required(VERSION 3.10)
project(MementoRK2)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(memento_test
    Originator.cpp
    State.cpp
    Memento.cpp
    test.cpp
)

install(TARGETS memento_test DESTINATION /usr/local/bin)
