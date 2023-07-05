#include <cstdlib>
#include <ctime>

class SelectableRandom{
    int start, finish;
public:
    SelectableRandom(){
        srand((unsigned)time(NULL));
    }
    int next(int OddorEven);
    int nextInRange(int a, int b, int OddorEven);
};