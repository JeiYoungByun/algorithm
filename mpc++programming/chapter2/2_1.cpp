#include <iostream>
using namespace std;

int main(){
    int a = 1;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout<<a<<'\t';
            a += 1;
        }
        
        cout<<'\n';
    }
}