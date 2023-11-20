# test/CMakeLists.txt

# Add test files in this directory to an executable
#add_executable(kata_trivia_tests main_test.cpp
#        main.cpp
#        catch2_starter_main.cpp)

# Link with ApprovalTests and Catch2
#target_link_libraries(kata_trivia_tests kata_trivia_lib ApprovalTests::ApprovalTests Catch2::Catch2)

# Set C++ standard if required (C++11 in this case)
# target_compile_features(kata_trivia_tests PRIVATE cxx_std_11)


set(EXE_NAME kata_trivia)
set(CMAKE_CXX_STANDARD 11)
add_executable(${EXE_NAME}
        main_test.cpp
        catch2_starter_main.cpp
)
target_link_libraries(${EXE_NAME} ApprovalTests::ApprovalTests Catch2::Catch2 kata_trivia_lib)

add_test(NAME ${EXE_NAME} COMMAND ${EXE_NAME})