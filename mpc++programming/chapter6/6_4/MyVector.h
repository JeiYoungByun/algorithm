#include <iostream>
using namespace std;

class MyVector{
    int *mem;
    int size;
public:
    MyVector(int n = 10, int val = 0);
    ~MyVector(){ delete [] mem;}
    void show();
};