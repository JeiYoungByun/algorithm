#ifndef EXP_H
#define EXP_H

class Exp {
    int base, ex;
    int value = 1;
public:
    Exp();
    Exp(int a);
    Exp(int a, int b);
    int getValue();
    int getBase();
    int getExp();
    bool equals(Exp);
} ;

#endif