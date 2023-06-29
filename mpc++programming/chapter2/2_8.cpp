#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char c[100];
    cout<<"5명의 이름을 ';'로 구분하여 입력하세요\n"<<">>";
    char max[100];
    
    for(int i=1; i<6; i++){
        cin.getline(c, 100, ';');
        cout<<i<<" : "<<c<<'\n';
        if(strlen(c)>strlen(max)) strcpy(max, c);    
    }
    cout<<"가장 긴 이름은 "<<max<<'\n';
}