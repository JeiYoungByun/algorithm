#include <iostream>
using namespace std;

int main(){
    int a, b = 0;
    
    cout<<"두 수를 입력하라>>";
    cin>>a>>b;
    if(a<b) cout<<"큰 수 = "<<b<<'\n';
    else if(a>b) cout<<"큰 수 = "<<a<<'\n';
    else cout<<"두수 같다"<<'\n';

}