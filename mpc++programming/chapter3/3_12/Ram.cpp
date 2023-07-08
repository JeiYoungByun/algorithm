#include <iostream>
#include "Ram.h"
using namespace std;

Ram::Ram() {
    mem[100*1024] = {0};
    size = 100*1024;
}

Ram::~Ram() {
    cout<<"memory deleted\n";
}

char Ram::read(int address) {
    char c = mem[address];
    return c;
}

void Ram::write(int address, char value) {
    mem[address] = value;
}