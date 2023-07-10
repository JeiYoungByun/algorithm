#ifndef GAMBLINGGAME_H
#define GAMBLINGGAME_H

#include "Player.h"
#include <string>
using namespace std;

class GamblingGame{
    int a, b, c;
    Player *p;
    string s;
public:
    GamblingGame();
    void Gameplay();
    ~GamblingGame();
};


#endif