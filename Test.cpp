#include <iostream>
#include <string>
#include "doctest.h"
#include "sources/game.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("intial check")
{
    Player player1("player1");
    Player player2("player2");

    Game game(player1, player2);
    
    CHECK(player1.stacksize() == 26);
    CHECK(player1.cardesTaken() == 0);

    CHECK(player2.stacksize() == 26);
    CHECK(player2.cardesTaken() == 0);
}

TEST_CASE("full game check")
{
    Player player1("player1");
    Player player2("player2");

    Game game(player1,player2);
    
    game.playAll();

    CHECK(player1.stacksize() == 0);
    CHECK(player2.stacksize() == 0);
    CHECK_NOTHROW(game.printWiner());


}

TEST_CASE("check reset")
{
    Player player1("player1");
    Player player2("player2");

    Game game(player1,player2);
    
    game.playAll();

    Game game2(player1,player2);

    CHECK(player1.stacksize() == 26);
    CHECK(player2.stacksize() == 26);
    CHECK(player1.cardesTaken() == 0);
    CHECK(player2.cardesTaken() == 0);

}

TEST_CASE("one turn check")
{
    Player player1("player1");
    Player player2("player2");

    Game game(player1,player2);
    
    game.playTurn();

    CHECK(player1.stacksize() == 25);
    CHECK(player2.stacksize() == 25);
    
}


TEST_CASE("play after end")
{
    Player player1("player1");
    Player player2("player2");

    Game game(player1,player2);
    
    game.playAll();

    CHECK_THROWS(game.playAll());
    CHECK_THROWS(game.playTurn());
}



TEST_CASE("check game before start")
{
    Player player1("player1");
    Player player2("player2");

    CHECK((player1.stacksize() == 0));
    CHECK((player2.stacksize() == 0));

    Game game(player1,player2);

}

TEST_CASE("wrong input")
{
    Player player1("player1");
    Player player2("");

    CHECK_THROWS(Game(player1, player1));
    CHECK_THROWS(Game(player1, player2));


}


TEST_CASE("play 10 turns") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    for (int i=0;i<10;i++) {
        game.playTurn();
    }
    CHECK(p1.stacksize() == 16);
    CHECK(p2.stacksize() == 16);

}
