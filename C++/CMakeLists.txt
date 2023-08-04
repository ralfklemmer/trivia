cmake_minimum_required(VERSION 3.26)
project(kata_trivia)

set(CMAKE_CXX_STANDARD 23)

add_executable(kata_trivia
        GameRunner.cpp
        Game.cpp
        Player.cpp
        Player.h
)
