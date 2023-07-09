#include <iostream>
#include "Sample.h"
using namespace std;

int main(){
    Sample s(10);
    s.read();
    s.write();
    cout<<"the biggest number is "<<s.big()<<'\n';
}