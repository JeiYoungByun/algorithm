#include <iostream>
using namespace std;

class Dept{
    int size;
    int* scores;
public:
    Dept(int size);
    //Dept(const Dept& dept);
    ~Dept() { delete [] scores; }
    int getSize(){ return size; }
    void read();
    bool isOver60(int index);
};