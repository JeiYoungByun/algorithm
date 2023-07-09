#include <iostream>
#include <vector>
#include "Circle.h"
using namespace std;

int main() {
    int n= 0;
    cout<<"The number of circles: ";
    cin>>n;
    vector<Circle> c(n);
    int x = 0;
    int sum = 0;

    for(int i=0; i<n; i++){
        cout<<"The radius of circle "<<i+1<<" >> ";
        cin>>x;
        c[i].setRadius(x);
        if(c[i].getArea() > 100) sum++;
    }

    cout<<"There are "<<sum<<" circles with an area greater than 100";
}