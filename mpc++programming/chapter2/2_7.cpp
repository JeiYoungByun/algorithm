#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char c[100];
    while(true){
        cout<<"�����ϰ������ yes�� �Է��ϼ���>>";
        cin.getline(c,100);

        if(strcmp(c, "yes")==0) break;
    }
    
    cout<<"�����մϴ�"<<'\n';
}