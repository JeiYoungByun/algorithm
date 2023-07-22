#ifndef UPANDDOWNGAME_H
#define UPANDDOWNGAME_H

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class UpAndDownGame{
    static int n;
    static int left, right;
public:
    static void PlayGame();
};

#endif