cmake_minimum_required(VERSION 3.26)
project(kata_trivia)

set(CMAKE_CXX_STANDARD 14)

# Include ApprovalTests as a dependency
include(FetchContent)
FetchContent_Declare(
        ApprovalTests
        GIT_REPOSITORY https://github.com/approvals/ApprovalTests.cpp.git
        GIT_TAG master
)
FetchContent_MakeAvailable(ApprovalTests)


# Include Catch2 and ApprovalTests as dependencies
include(FetchContent)
FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v2.13.7
)
FetchContent_MakeAvailable(Catch2)

# Add subdirectories for source code and tests
add_subdirectory(src)
add_subdirectory(test)