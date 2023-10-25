cmake_minimum_required(VERSION 3.26)
project(kata_trivia)

include(FetchContent)

set(CMAKE_CXX_STANDARD 14)

# Use FetchContent to download ApprovalTests
FetchContent_Declare(
        ApprovalTests
        GIT_REPOSITORY https://github.com/approvals/ApprovalTests.cpp.git
        GIT_TAG master
)

FetchContent_MakeAvailable(ApprovalTests)

include_directories(.)

add_executable(kata_trivia
        Game.cpp
        Game.h
        GameRunner.cpp
        Player.cpp
        Player.h)

# Link ApprovalTests to executable
target_link_libraries(kata_trivia ApprovalTests::ApprovalTests)