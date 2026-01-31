cmake_minimum_required(VERSION 3.10)

project(lcd_chars VERSION 0.0.1)

add_library(lcd_chars INTERFACE)
target_compile_features(lcd_chars INTERFACE cxx_std_11)
target_include_directories(
    lcd_chars
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

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
include(CMakePackageConfigHelpers)

write_basic_package_version_file(
    lcdCharsVersion.cmake
    VERSION ${PACKAGE_VERSION}
    COMPATIBILITY SameMajorVersion
)

configure_package_config_file(
    ${PROJECT_SOURCE_DIR}/cmake/lcdCharsConfig.cmake.in
    ${PROJECT_BINARY_DIR}/lcdCharsConfig.cmake
    INSTALL_DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/lcd_chars/cmake
)

install(TARGETS lcd_chars EXPORT lcd_chars)

install(
    EXPORT lcd_chars
    FILE lcdCharsTargets.cmake
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/lcd_chars/cmake
)

install(
    FILES
        "${PROJECT_BINARY_DIR}/lcdCharsConfig.cmake"
        "${PROJECT_BINARY_DIR}/lcdCharsVersion.cmake"
    DESTINATION ${CMAKE_INSTALL_DATAROOTDIR}/lcd_chars/cmake
)

install(
    DIRECTORY ${PROJECT_SOURCE_DIR}/include/
    DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/lcd_chars
)
