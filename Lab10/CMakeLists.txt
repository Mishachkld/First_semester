cmake_minimum_required(VERSION 3.23)
project(Lab10)

set(CMAKE_CXX_STANDARD 17)

add_executable(Lab10 main.cpp
                     Abonent.cpp
                     Abonent.hpp
                     Provider.cpp
                     Provider.hpp)
