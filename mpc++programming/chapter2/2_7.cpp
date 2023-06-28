#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char c[100];
    while(true){
        cout<<"종료하고싶으면 yes를 입력하세요>>";
        cin.getline(c,100);

        if(strcmp(c, "yes")==0) break;
    }
    
    cout<<"종료합니다"<<'\n';
}