#include <iostream>
#include <string>
#include "game.hpp"
#include "player.hpp"
#include "card.hpp"

using namespace std;

namespace ariel
{
    Game::Game(Player& other1, Player& other2): p1(p1), p2(p2)
    {
        this->_p1 = other1;
        this->_p1 = other2;
    }

    void Game::playTurn() {}

    void Game::printLastTurn() {}

    void Game::playAll() {}

    void Game::printWiner() {}

    void Game::printLog() {}

    void Game::printStats() {}
};
