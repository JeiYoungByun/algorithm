#include "MyVector.h"

MyVector::MyVector(int n, int val){
    mem = new int [n];
    size = n;
    for(int i=0; i<size; i++) mem[i] = val;
}

void MyVector::show(){
    for(int i=0; i<size; i++) { cout<<mem[i]<<' ';}
    cout<<endl;
}