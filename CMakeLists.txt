cmake_minimum_required(VERSION 3.10)

project(lcd-type VERSION 0.0.1)

add_executable(tui src/tui.cpp)
target_compile_features(tui PRIVATE cxx_std_11)
