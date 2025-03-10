# set(PROJECT_NAME CppProject)
get_filename_component(PROJECT_NAME ${CMAKE_SOURCE_DIR} NAME)

cmake_minimum_required(VERSION 3.30)

project(${PROJECT_NAME} CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Make clangd LSP work
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include)

# set(SOURCES 
#     "src/main.cpp"
#     "src/example.cpp"
# )
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
