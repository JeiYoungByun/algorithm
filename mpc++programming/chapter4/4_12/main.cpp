#include "CircleManager.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    int size = 0;
    cout<<"number of circles >> ";
    cin>>size;
    CircleManager c(size);
    c.searchByName();
    c.searchByArea();
}