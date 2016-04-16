cmake_minimum_required (VERSION 2.8)
project("potential pick demo project")

# ================ compiler
set(CMAKE_CXX_FLAGS "-std=c++14 -Wall -Wextra -Wpedantic")

set(SRC ${PROJECT_SOURCE_DIR}/src)

# ================ include dirs
include_directories(${SRC})

# ================ sub dirs
add_subdirectory(example)
