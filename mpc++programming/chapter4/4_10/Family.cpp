#include <string>
#include <iostream>
#include "Family.h"
using namespace std;

Family::Family(string name, int size) {
    this->size = size;
    this->name = name;
    p = new Person[this->size];
}

void Family::setName(int i, string name) {
    p[i].setName(name);
}

void Family::show() {
    cout<<name<<" family have "<<size<<" members like this\n";
    for(int i=0; i<size; i++){
        cout<<p[i].getName()<<' ';
    }
    cout<<endl;
}

Family::~Family() {delete [] p;}