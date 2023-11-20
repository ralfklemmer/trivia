if (WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif()

add_library(kata_trivia_lib
        Game.cpp
        Game.h
        GameBetter.cpp)

add_executable(GameRunner
        GameRunner.cpp
)

target_include_directories(kata_trivia_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(GameRunner PUBLIC kata_trivia_lib)
