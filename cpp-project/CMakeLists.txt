# set(PROJECT_NAME CppProject)
get_filename_component(PROJECT_NAME ${CMAKE_SOURCE_DIR} NAME)

cmake_minimum_required(VERSION 3.30)

project(${PROJECT_NAME} CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_compile_options(-fdiagnostics-color=always)

# ------ Debug ------
# Address, undefined, leak
set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wextra -Wpedantic -fsanitize=address,undefined,leak -fno-omit-frame-pointer")
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "-fsanitize=address,undefined,leak")

# Thread
# set(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -Wextra -Wpedantic -fsanitize=thread -fno-omit-frame-pointer")
# set(CMAKE_EXE_LINKER_FLAGS_DEBUG "-fsanitize=thread")
# -------------------

# Make clangd LSP work
set(CMAKE_CXX_SCAN_FOR_MODULES OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# ------ Libraries ------
include(FetchContent)

FetchContent_Declare(
	fmt
	GIT_REPOSITORY https://github.com/fmtlib/fmt
	GIT_TAG 11.1.4
)
FetchContent_MakeAvailable(fmt)
# -----------------------

include_directories(include)

# set(SOURCES 
#     "src/main.cpp"
#     "src/example.cpp"
# )
file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

# ------ Libraries ------
target_link_libraries(${PROJECT_NAME} PRIVATE fmt)
# -----------------------
