#include <iostream>
#include <cstdlib>
#include "SelectableRandom.h"
using namespace std;

int main(){
    SelectableRandom r;
    cout<<"--from 0 to "<<RAND_MAX<<" 10 randomized even integers--\n";
    for(int i=0; i<10; i++){
        int n = r.next(0);
        cout<<n<<' ';
    }
    cout<<'\n'<<'\n'<<"--from 2 to 9 10 randomized odd integers--\n";
    for(int i=0; i<10; i++){
        int n = r.nextInRange(2, 9, 1);
        cout<<n<<' ';
    }
    cout<<'\n';
}