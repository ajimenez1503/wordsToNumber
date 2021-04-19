cmake_minimum_required(VERSION 3.5)

project(wordsToNumber)

message(STATUS "Create wordsToNumber project")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/bin")

file(REMOVE_RECURSE "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
file(MAKE_DIRECTORY "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")
message(STATUS "Create ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} folder")

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src/")
