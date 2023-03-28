#pragma once

#include "player.hpp"

namespace ariel
{
    class Game
    {
        private:
            Player& player1;
            Player& player2;
            int turn;

        public:
            Game(Player& plr1, Player& plr2);

            void playTurn();

            void printLastTurn();

            void playAll();

            void printWiner();

            void printLog();

            void printStats();
    };
}
