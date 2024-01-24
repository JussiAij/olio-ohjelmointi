#include "game.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

Game::Game(int maxNum) : maxNumber(maxNum)
{
    cout << "Maximum number is " << maxNumber << endl;
}

void Game::play()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    randomNumber = rand() % maxNumber + 1;
    numOfGuesses = 0;

    do {
        cout << "Enter a guess between 0 and " << maxNumber << ": ";
        cin >> playerGuess;

        if (playerGuess == randomNumber) {
            cout << "You guessed correctly! Your guess was: " << playerGuess << endl;
        } else if (playerGuess < randomNumber) {
            cout << "Your guess is too low." << endl;
        } else {
            cout << "Your guess is too high." << endl;
        }

        numOfGuesses++;

    } while (playerGuess != randomNumber);

    printGameResult();
}

void Game::printGameResult()
{
    cout << "You needed " << numOfGuesses << " guesses. The correct answer was: " << randomNumber << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
    cout << "Press <RETURN> to close this window..." << endl;
}
