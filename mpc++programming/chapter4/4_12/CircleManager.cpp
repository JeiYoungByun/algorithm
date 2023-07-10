#include "CircleManager.h"
#include <iostream>
#include <string>
using namespace std;

CircleManager::CircleManager(int size) {
    p = new Circle[size];
    this->size = size;

    int radius;
    string name;
    
    for(int i=0; i<size; i++){
        cout<<"name and radius of circle "<<i+1<<" >> ";
        cin>>name>>radius;
        p[i].setCircle(name, radius);
        cin.ignore();
    }
}

CircleManager::~CircleManager() {
    delete [] p;
}

void CircleManager::searchByName() {
    string s;
    cout<<"circle's name >> ";
    getline(cin, s);
    for(int i=0; i<size; i++){
        if((p[i].getName()) == s) cout<<"area of "<<p[i].getName()<<" is "<<p[i].getArea(); 
    }
    cout<<endl;
}

void CircleManager::searchByArea() {
    int k = 0;
    cout<<"input minimum area by integer >> ";
    cin>>k;
    cout<<"gonna search circle which is larger than "<<k<<endl;
    for(int i=0; i<size; i++){
        if((p[i].getArea()) > k) cout<<"The area of "<<p[i].getName()<<" is "<<p[i].getArea()<<","; 
    }
    cout<<endl;
}