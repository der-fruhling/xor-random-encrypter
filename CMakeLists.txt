cmake_minimum_required(VERSION 3.12)
project(archiverize)

set(CMAKE_CXX_STANDARD 17)

add_executable(xorenc main.cpp archive/Encrypt.cpp archive/Encrypt.h extract/Decrypt.cpp extract/Decrypt.h)
