cmake_minimum_required(VERSION 3.10)

project(Blockchain)

set(CMAKE_CXX_STANDARD 17)

add_executable(Blockchain main.cpp Blockchain.cpp)

include_directories(headers)