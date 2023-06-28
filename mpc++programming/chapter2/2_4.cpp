#include <iostream>
using namespace std;

int main(){
    float Findmax[5] = {0};
    cout<<"5개의 실수를 입력하라>>";
    for(int i=0; i<5; i++){
        cin>>Findmax[i];
    }
    float max = Findmax[0];
    for(int i=0; i<5; i++){
        if(max<Findmax[i]) max = Findmax[i];
    }
    cout<<"제일 큰 수 = "<<max<<'\n';
}