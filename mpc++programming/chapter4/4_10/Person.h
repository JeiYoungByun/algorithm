#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
    string name;
public:
    Person() {};
    void setName(string name) {this->name = name;}
    string getName() { return name; }
};

#endif