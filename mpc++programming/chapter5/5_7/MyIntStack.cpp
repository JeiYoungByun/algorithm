#include "MyIntStack.h"

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