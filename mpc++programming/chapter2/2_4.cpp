#include <iostream>
using namespace std;

int main(){
    float Findmax[5] = {0};
    cout<<"5���� �Ǽ��� �Է��϶�>>";
    for(int i=0; i<5; i++){
        cin>>Findmax[i];
    }
    float max = Findmax[0];
    for(int i=0; i<5; i++){
        if(max<Findmax[i]) max = Findmax[i];
    }
    cout<<"���� ū �� = "<<max<<'\n';
}