#ifndef CALCULATOR_H
#define CALCULATOR_H

class Add{
    int a, b;
public:
    Add();
    void setValue(int x, int y);
    int calculate();
};

class Sub{
    int a, b;
public:
    Sub();
    void setValue(int x, int y);
    int calculate();
};

class Mul{
    int a, b;
public:
    Mul();
    void setValue(int x, int y);
    int calculate();
};

class Div{
    int a, b;
public:
    Div();
    void setValue(int x, int y);
    int calculate();
};

#endif