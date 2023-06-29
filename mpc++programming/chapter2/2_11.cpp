#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int sum = 0;
    cout<<"끝수를 입력하세요>>";
    cin>>n;
    for(int k=1; k<n+1; k++) sum += k;
    cout<<"1에서 10까지의 합은 "<<sum<<"입니다.\n";
}