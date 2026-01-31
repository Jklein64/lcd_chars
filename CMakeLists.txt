cmake_minimum_required(VERSION 3.10)

project(lcd_chars VERSION 0.0.1)

add_executable(tui src/tui.cpp)
target_include_directories(tui PRIVATE include)
target_compile_features(tui PRIVATE cxx_std_11)

add_executable(extract src/extract.cpp)
target_include_directories(extract PRIVATE include)
target_compile_features(extract PRIVATE cxx_std_11)
target_include_directories(extract PRIVATE dep)
