#include <cstdlib>
#include <ctime>

class Random{
    int start, finish = 0;
public : 
    Random() {
        srand((unsigned)time(NULL));
    }
    int next();
    int nextInRange(int a, int b);
};