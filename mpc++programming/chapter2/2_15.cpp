#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
    char c[100];
    int num1, num2;
    char op;
    while(true){
        cout<<"? ";
        cin.getline(c, 100, ' ');
        int num1 = atoi(c);
        cin.getline(c, 100, ' ');
        op = c[0];
        cin.getline(c, 100);
        int num2 = atoi(c);

        if(op == '+') cout<<num1<<" + "<<num2<<" = "<<num1+num2<<'\n';
        else if(op == '-') cout<<num1<<" - "<<num2<<" = "<<num1-num2<<'\n';
        else if(op == '*') cout<<num1<<" * "<<num2<<" = "<<num1*num2<<'\n';
        else if(op == '/') cout<<num1<<" / "<<num2<<" = "<<num1/num2<<'\n';
        else if(op == '%') cout<<num1<<" % "<<num2<<" = "<<num1%num2<<'\n';
        else break;
    }
    cout<<"³¡";
}