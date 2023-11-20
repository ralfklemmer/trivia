add_executable(kata_trivia
        game_test.cpp
)
target_link_libraries(kata_trivia Catch2::Catch2 kata_trivia_lib)

if (WIN32)
    add_custom_target(
            kata_trivia_copy_dependencies
            COMMAND
            ${CMAKE_COMMAND} -E copy_if_different
            "$<TARGET_FILE:kata_trivia_lib>"
            "${CMAKE_CURRENT_BINARY_DIR}"

            DEPENDS kata_trivia_lib)

    add_dependencies(
            kata_trivia
            kata_trivia_copy_dependencies)
endif()
