#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "Game.h"
#include <sstream>


std::string extractOutput(int seed, IGame& aGame) {
    std::default_random_engine rand(seed);

    std::ostringstream oss;
    std::streambuf* old = std::cout.rdbuf(oss.rdbuf());

    aGame.add("Chet");
    aGame.add("Pat");
    aGame.add("Sue");

    bool notAWinner = false;
    do {
        aGame.roll(rand() % 5 + 1);

        if (rand() % 9 == 7) {
            notAWinner = aGame.wrongAnswer();
        } else {
            notAWinner = aGame.wasCorrectlyAnswered();
        }
    } while (notAWinner);

    std::cout.rdbuf(old);
    printf("\n\n");
    return oss.str();
}

TEST_CASE("Caracterization Test", "[caracterization]") {
    for (int seed = 1; seed < 10000; seed++) {
        Game g;
        GameBetter gB;
        INFO("Seed: " << seed);
        CHECK(extractOutput(seed, g) == extractOutput(seed, gB));
    }
}

TEST_CASE("One Seed", "[oneSeed]") {
    int seed = 1;
    Game g;
    GameBetter gB;

    REQUIRE(extractOutput(seed, g) == extractOutput(seed, gB));
}
