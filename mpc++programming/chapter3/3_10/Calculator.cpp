#include "Calculator.h"

Add::Add() : a(0), b(0) {}

void Add::setValue(int x, int y){
    a = x;
    b = y;
}

int Add::calculate(){
    return a + b;
}

Sub::Sub() : a(0), b(0) {}

void Sub::setValue(int x, int y){
    a = x;
    b = y;
}

int Sub::calculate(){
    return a - b;
}

Mul::Mul() : a(0), b(0) {}

void Mul::setValue(int x, int y){
    a = x;
    b = y;
}

int Mul::calculate(){
    return a * b;
}

Div::Div() : a(0), b(0) {}

void Div::setValue(int x, int y){
    a = x;
    b = y;
}

int Div::calculate(){
    return a / b;
}