#include "player.hpp"
#include "iostream"
using namespace std;

Player::Player(){
    
}

Player::Player(string name)
{
    this->name = name;
}
int Player::stacksize(){return 0;}

int Player::cardesTaken(){return 0;}

