cmake_minimum_required(VERSION 3.5)

project(Guitar-Fretboard LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Guitar-Fretboard main.cpp)

install(TARGETS Guitar-Fretboard
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
