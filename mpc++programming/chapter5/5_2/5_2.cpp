#include <iostream>
using namespace std;

void half(double&);

int main(){
    double n = 20;
    half(n);
    cout << n;
}

void half(double& a){
    a /= 2;
}