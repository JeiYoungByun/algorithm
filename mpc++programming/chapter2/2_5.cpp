#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char A[100];
    cout<<"���ڵ��� �Է��϶�(100�� �̸�).\n";
    cin.getline(A, 100);
    int Findx = 0;
    for(int i=0; i<100; i++){
        if(A[i]=='x') Findx += 1;
    }
    cout<<"x�� ������ "<<Findx<<'\n';
}