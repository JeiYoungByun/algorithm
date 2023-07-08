#include <iostream>
#include "Oval.h"
using namespace std;

Oval::~Oval() {
    cout<<width<<height<<'\n';
}

int Oval::getWidth() {
    return width;
}

int Oval::getHeight() {
    return height;
}

void Oval::set(int w, int h){
    width = w;
    height = h;
}

void Oval::show(){
    cout<<width<<height<<'\n';
}