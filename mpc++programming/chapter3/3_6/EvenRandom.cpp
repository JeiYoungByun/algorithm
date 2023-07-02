#include <cstdlib>
#include "EvenRandom.h"


int EvenRandom::next(){
    int k = rand();
    if(k%2 == 0) return k;
    else return k-1;
}

int EvenRandom::nextInRange(int a, int b){
    int k = rand();
    return 2*(k % 5 + 1);
}