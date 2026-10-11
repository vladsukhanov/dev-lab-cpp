cmake_minimum_required(VERSION 3.25)

project(dev_lab_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(BUILD_TESTS "Build tests" ON)
option(ENABLE_COVERAGE "Enable gcov coverage" OFF)

add_library(project_coverage INTERFACE)
if(ENABLE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(project_coverage INTERFACE --coverage -O0 -g)
    target_link_options(project_coverage INTERFACE --coverage)
endif()

find_package(fmt CONFIG REQUIRED)

add_subdirectory(src)

if(BUILD_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()
