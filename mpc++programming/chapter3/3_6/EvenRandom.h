#include <cstdlib>
#include <ctime>

class EvenRandom{
    int start, finish = 0;
public : 
    EvenRandom() {
        srand((unsigned)time(NULL));
    }
    int next();
    int nextInRange(int a, int b);
};