cmake_minimum_required(VERSION 2.8.3)

set(CMAKE_PROJECT_NAME "string-test")

set(LIBRARY_NAME "StringLib")

set(EXECUTABLE_NAME "test")


project(${CMAKE_PROJECT_NAME})

add_library(
  ${LIBRARY_NAME}
  String.cc
)

add_executable(
  ${EXECUTABLE_NAME}
  test/test.cc
)

target_link_libraries(
  ${EXECUTABLE_NAME}
  ${LIBRARY_NAME}
)

