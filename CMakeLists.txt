cmake_minimum_required(VERSION 3.10)

project(lcd_chars VERSION 0.0.1)

add_library(lcd_chars INTERFACE)
target_compile_features(lcd_chars INTERFACE cxx_std_11)
target_include_directories(lcd_chars INTERFACE include)

# Don't expose these targets when downloading with FetchContent
if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    add_executable(extract src/extract.cpp)
    target_compile_features(extract PRIVATE cxx_std_11)
    target_include_directories(extract PRIVATE dep)
    target_link_libraries(extract PRIVATE lcd_chars)

    add_executable(tui src/tui.cpp)
    target_compile_features(tui PRIVATE cxx_std_11)
    target_link_libraries(tui PRIVATE lcd_chars)
endif()

include(GNUInstallDirs)

install(
    TARGETS lcd_chars
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/lcd_chars
)
