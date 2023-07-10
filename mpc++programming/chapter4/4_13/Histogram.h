#ifndef HISTOGRAM_H
#define HISTOGRAM_H

#include <string>
using namespace std;

class Histogram {
    string s;
public:
    Histogram(string s);
    void put(string a);
    void putc(char b);
    void print();
};





#endif