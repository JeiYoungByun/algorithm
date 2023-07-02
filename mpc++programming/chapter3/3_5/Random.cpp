#include <cstdlib>
#include "Random.h"

int Random::next(){
    int k = rand();
    return k;
}

int Random::nextInRange(int a, int b){
    int k = rand();
    return k % 3 + 2;
}