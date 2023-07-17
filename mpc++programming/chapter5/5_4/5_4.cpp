#include <iostream>

using namespace std;

bool bigger(int a, int b, int& big){
    if (a == b) { return true ;}
    else {
        big = a > b ? a : b;
        return false;
    }
}

int main(){
    int a, b;
    int result;
    cin>>a>>b;
    bool TrueorFalse = bigger(a, b, result);
    if (TrueorFalse) cout<<"two numbers are same"<<endl;
    else cout<<"The bigger number is "<<result<<endl;
}