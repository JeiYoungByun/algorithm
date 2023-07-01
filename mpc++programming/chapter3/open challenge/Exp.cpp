#include "Exp.h"

Exp::Exp() : Exp(1,1) {};

Exp::Exp(int a) : Exp(a, 1) {};

Exp::Exp(int a, int b) {
    base = a, ex = b;
}

int Exp::getValue(){
    for(int i=0; i<ex; i++)  value *= base;
    return value;
}

int Exp::getBase() {
    return base;
}

int Exp::getExp(){
    return ex;
}

bool Exp::equals(Exp b){
    if(Exp::getValue() == b.getValue()) return true;
    else return false;
}
