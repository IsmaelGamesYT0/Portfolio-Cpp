cmake_minimum_required(VERSION 3.16)
project(cpp_portfolio VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# hello
add_executable(hello src/hello/main.cpp)

# algorithms
add_executable(binary_search src/algorithms/binary_search.cpp)

# data_structures
add_executable(linked_list src/data_structures/linked_list.cpp)
