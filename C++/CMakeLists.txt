cmake_minimum_required(VERSION 3.26)
project(kata_trivia)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v2.13.7
)
FetchContent_MakeAvailable(Catch2)

add_subdirectory(src)
add_subdirectory(test)