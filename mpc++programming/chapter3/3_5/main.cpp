#include <iostream>
#include <cstdlib>
#include "Random.h"
using namespace std;

int main(){
    Random r;
    cout<<"--from 0 to "<<RAND_MAX<<" 10 randomized integers--\n";
    for(int i=0; i<10; i++){
        int n = r.next();
        cout<<n<<' ';
    }
    cout<<'\n'<<'\n'<<"--from 2 to 4 10 randomized integers--\n";
    for(int i=0; i<10; i++){
        int n = r.nextInRange(2, 4);
        cout<<n<<' ';
    }
    cout<<'\n';
}