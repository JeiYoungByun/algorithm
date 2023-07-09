#include <iostream>
#include "Circle.h"
using namespace std;

int main(){
    Circle *c = new Circle[3];
    int x;
    int sum = 0;
    for(int i=1; i<4; i++){
        cout<<"radius of circle "<<i<<" >>";
        cin>>x;
        c[i-1].setRadius(x);
        if(c[i-1].getArea() > 100) sum++;
    }
    cout<<"There are "<<sum<<" circles with an area greater than 100\n";
    delete [] c;
}