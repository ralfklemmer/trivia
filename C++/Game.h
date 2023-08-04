#include <iostream>
#include <list>
#include <vector>
#include "Player.h"

using namespace std;

#ifndef GAME_H_
#define GAME_H_

class Game {

private:
    vector<Player> players2;

    int places[6];
    int purses[6];

    bool inPenaltyBox[6];

    list<string> popQuestions;
    list<string> scienceQuestions;
    list<string> sportsQuestions;
    list<string> rockQuestions;

    int currentPlayer;
    bool isGettingOutOfPenaltyBox;

public:
    Game();

    string createRockQuestion(int index);

    bool add(string playerName);

    int howManyPlayers();

    void roll(int roll);

private:
    void askQuestion();

    string currentCategory();

public:
    bool wasCorrectlyAnswered();

    bool wrongAnswer();

private:
    bool didPlayerWin();
};

#endif /* GAME_H_ */
