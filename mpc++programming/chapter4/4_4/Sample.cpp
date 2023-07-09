#include <iostream>
#include "Sample.h"
using namespace std;

void Sample::read(){
    for(int i=0; i<size; i++) {
        cin>>p[i];
    }
}

void Sample::write() {
    for(int i=0;i<size;i++) {
        cout<<p[i]<<' ';
    }
    cout<<endl;
}

int Sample::big() {
    int max = 0;
    for(int i=0; i<size; i++) {
        if(max < p[i]) max = p[i];
    }
    return max;
}

Sample::~Sample(){
    delete [] p;
}