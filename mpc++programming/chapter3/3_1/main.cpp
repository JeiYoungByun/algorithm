#include <iostream>
using namespace std;

#include "Tower.h"

int main(){
    Tower myTower;
    Tower seoulTower(100);
    cout<<myTower.getHeight()<<'\n';
    cout<<seoulTower.getHeight()<<'\n';
}