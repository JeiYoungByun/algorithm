#include "MyIntStack.h"

MyIntStack::MyIntStack(){
    tos = 0;
    size = 0;
    p = new int [size];
    for(int i = 0; i < 10; i++){
        p[i] = 0;
    }   
}

MyIntStack::MyIntStack(int size){
    this->size = size;
    tos = 0;
    p = new int [size];
    for(int i = 0; i < size; i++){
        p[i] = 0;
    }
}

MyIntStack::MyIntStack(const MyIntStack& s){
    this->size = s.size;
    this->tos = s.tos;
    this->p = new int [size];
    for(int i=0; i<size; i++) p[i] = s.p[i];
}

MyIntStack::~MyIntStack(){
    delete [] p;
}

bool MyIntStack::push(int n){
    if(tos<10){
        p[tos++] = n;
        return true;
    }
    else return false;
}

bool MyIntStack::pop(int &n){
    if(tos<1) return false;
    else{
        n = p[--tos];
        return true;
    }
}