cmake_minimum_required(VERSION 2.6)
project(example_02)
set (Example_VERSION_MAJOR 1)
set (Example_VERSION_MINOR 0)
configure_file(
	"${PROJECT_SOURCE_DIR}/ExampleConfig.h.in"
	"${PROJECT_BINARY_DIR}/ExampleConfig.h"
	)
#ExampleConfig.h
include_directories("${PROJECT_BINARY_DIR}")
add_executable(example_02 main.cpp)
