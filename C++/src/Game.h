#include <iostream>
#include <list>
#include <vector>

using namespace std;

#ifndef GAME_H_
#define GAME_H_

class IGame{

public:
	virtual string createRockQuestion(int index) = 0;
    virtual bool add(string playerName) = 0;

    virtual int howManyPlayers() = 0;
    virtual void roll(int roll) = 0;

    virtual bool wasCorrectlyAnswered() = 0;
    virtual bool wrongAnswer() = 0;
};

class Game : public IGame{

private:
    vector<string> players;

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
    string createRockQuestion(int index) override;
    bool add(string playerName) override;

    int howManyPlayers() override;
    void roll(int roll) override;

private:
    void askQuestion();
    string currentCategory();

public:
    bool wasCorrectlyAnswered() override;
    bool wrongAnswer() override;

private:
    bool didPlayerWin();
};

class GameBetter : public IGame {
public:
    GameBetter();
    string createRockQuestion(int index) override;
    bool add(string playerName) override;

    int howManyPlayers() override;
    void roll(int roll) override;

    bool wasCorrectlyAnswered() override;
    bool wrongAnswer() override;

private:
    vector<string> players;

    int places[6];
    int purses[6];

    bool inPenaltyBox[6];

    list<string> popQuestions;
    list<string> scienceQuestions;
    list<string> sportsQuestions;
    list<string> rockQuestions;

    int currentPlayer;
    bool isGettingOutOfPenaltyBox;
    void askQuestion();
    string currentCategory();
    bool didPlayerWin();
};

#endif /* GAME_H_ */
