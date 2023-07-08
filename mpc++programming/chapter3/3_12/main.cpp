#include <iostream>
#include "Ram.h"
using namespace std;

int main() {
    Ram ram;
    ram.write(100, 20);
    ram.write(101, 30);
    char res = ram.read(100) + ram.read(101);
    ram.write(102, res);
    cout<<"the value of 102th = "<<(int)ram.read(102)<<'\n';
}