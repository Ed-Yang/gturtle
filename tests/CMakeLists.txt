cmake_minimum_required(VERSION 3.0.2)

project(tests)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_DEFAULT_STARTUP_PROJECT test_turtle)

include_directories("..")

# vscode cmake tools (necessary only in old version ??)
 include(CMakeToolsHelpers OPTIONAL)

add_executable(test_turtle ./test_turtle.cc)
target_link_libraries(test_turtle gtest gmock)

# CTest
add_test(test-turtle test_turtle)
