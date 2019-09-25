cmake_minimum_required(VERSION 3.14)
project(archiverize)

set(CMAKE_CXX_STANDARD 17)

add_executable(archiverize main.cpp archive/Archiver.cpp archive/Archiver.h extract/UnArchiver.cpp extract/UnArchiver.h)