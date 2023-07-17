#include <iostream>
#include "MyIntStack.h"

using namespace std;

int main(){
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout<<"value popped from stack a "<<n<<endl;
    b.pop(n);
    cout<<"value popped from stack b "<<n<<endl;
}