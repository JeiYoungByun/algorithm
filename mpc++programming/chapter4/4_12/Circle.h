#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>
using namespace std;

class Circle{
    int radius;
    string name;
public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};

#endif