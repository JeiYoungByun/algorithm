#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char c[100];
    cout<<"5���� �̸��� ';'�� �����Ͽ� �Է��ϼ���\n"<<">>";
    char max[100];
    
    for(int i=1; i<6; i++){
        cin.getline(c, 100, ';');
        cout<<i<<" : "<<c<<'\n';
        if(strlen(c)>strlen(max)) strcpy(max, c);    
    }
    cout<<"���� �� �̸��� "<<max<<'\n';
}