#include <iostream>
#include <string>
#include "Calculator.h"
using namespace std;

int main(){
    string a, b, c;

    while (true){
        cout<<"input two integers with operator>>";
        getline(cin, a, ' ');
        int x = stoi(a);
        getline(cin, b, ' ');
        int y = stoi(b);
        getline(cin, c);
        if(c == "+"){
            Add a;
            a.setValue(x, y);
            cout<<a.calculate()<<'\n';
        }
        else if(c == "-"){
            Sub s;
            s.setValue(x, y);
            cout<<s.calculate()<<'\n';
        }
        else if(c == "*"){
            Mul m;
            m.setValue(x, y);
            cout<<m.calculate()<<'\n';
        }
        else {
            Div d;
            d.setValue(x, y);
            cout<<d.calculate()<<'\n';
        }
    }
   
}