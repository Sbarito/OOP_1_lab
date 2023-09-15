cmake_minimum_required(VERSION 3.27)

project(main)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-g -rdynamic)

add_subdirectory(googletest)

set(TEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/test)

set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(main_lab ${SOURCE_DIR}/main.cpp)

add_executable(test_lab ${TEST_DIR}/test.cpp)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES false ${SOURCE_DIR}/*.cpp)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false ${TEST_DIR}/*.cpp)

add_library(${CMAKE_PROJECT_NAME}_lib ${SOURCES})

target_link_libraries(main_lab PRIVATE ${CMAKE_PROJECT_NAME}_lib)

target_include_directories(test_lab PRIVATE ${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

target_link_libraries(test_lab PRIVATE ${CMAKE_PROJECT_NAME}_lib gtest gtest_main)










