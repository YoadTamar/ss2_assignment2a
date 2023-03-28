#pragma once 

#include <iostream>
#include <string>
using namespace std;

namespace ariel {
    Card::Card(int value, char type) {
        this->value = value;
        this->type = type;
    }
}
