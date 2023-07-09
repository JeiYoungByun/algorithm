#ifndef FAMILY_H
#define FAMILY_H

#include "Person.h"
#include <string>
using namespace std;

class Family{
    Person *p;
    int size;
    string name;
public:
    Family(string name, int size);
    void setName(int i, string name);
    void show();
    ~Family();
};

#endif