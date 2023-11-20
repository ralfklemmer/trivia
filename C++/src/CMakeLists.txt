# src/CMakeLists.txt

# Add source files in this directory to a lib
add_library(kata_trivia_lib
        Game.cpp
        Game.h
        GameRunner.cpp)

# Set include directories for the library
target_include_directories(kata_trivia_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link any additional libraries if needed
# target_link_libraries(kata_trivia YourLibraryName)

# Set C++ standard if required (C++11 in this case)
# target_compile_features(kata_trivia PRIVATE cxx_std_11)
