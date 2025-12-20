cmake_minimum_required(VERSION 3.10)
project(ErykObiektowka)

add_executable(ErykObiektowka main.cc src/algorytm.cc src/algorytm_zlozony.cc)

target_include_directories(ErykObiektowka PRIVATE include features/algorithm/include)