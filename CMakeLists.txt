cmake_minimum_required(VERSION 3.15...3.31)

project(YokaiLib VERSION 0.1 DESCRIPTION "A Library for working with Extracted Yokai" LANGUAGES C CXX)

option(BUILD_CXX_LIBS "Decide weather or not to build the library for cpp or c")

if(BUILD_CXX_LIBS)
add_library(YokaiLib src/YokaiExtract.cpp)
else()
add_library(YokaiLib src/YokaiExtract.c)
endif()

target_include_directories(YokaiLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)