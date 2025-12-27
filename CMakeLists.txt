cmake_minimum_required(VERSION 3.10)
project(ErykObiektowka)

add_executable(ErykObiektowka 
    main.cc 
    features/algorithm/src/algorithm.cc
    features/sorting_algorithm/src/sorting_algorithm.cc
    features/selection_sort/src/selection_sort.cc
)

target_include_directories(ErykObiektowka 
    PRIVATE 
    include 
    features/algorithm/include 
    features/sorting_algorithm/include
    features/selection_sort/include
)