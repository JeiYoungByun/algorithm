#include <cstdlib>
#include "SelectableRandom.h"

int SelectableRandom::next(int OddorEven){
    if (OddorEven == 1){
        while(true){
            int n = rand();
            if(n%2 != 0) return n;
        }
    }
    else if (OddorEven == 0){
        while(true){
            int n = rand();
            if(n%2 == 0) return n;
        }
    }
    else return -1;
}

int SelectableRandom::nextInRange(int a, int b, int OddorEven) {
    if (OddorEven == 1){
        while(true){
            int n = rand();
            int k = n%(b-a+1) + a;
            if(k%2 != 0) return k;
        }
    }
    else if (OddorEven == 0){
        while(true){
            int n = rand();
            int k = n%(b-a+1) + a;
            if(k%2 == 0) return k;
        }
    }
    else return -1;
}