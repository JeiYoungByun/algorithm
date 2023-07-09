#include "CoffeeVendingMachine.h"
#include <iostream>
using namespace std;

void CoffeeVendingMachine::fill(){
    for(int i=0; i<3; i++){
        tong[i].fill();
    }
}

void CoffeeVendingMachine::selectEspresso(){
    tong[0].consume();
    tong[1].consume();
}

void CoffeeVendingMachine::selectAmericano(){
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
}

void CoffeeVendingMachine::selectSugarCoffee(){
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    tong[2].consume();
}

void CoffeeVendingMachine::show(){
    cout<<"coffee "<<tong[0].getSize()<<", water "<<tong[1].getSize()<<", sugar "<<tong[2].getSize()<<'\n';
}

void CoffeeVendingMachine::run(){
    cout<<"***** gonna run coffeevendingmachine *****\n";
    
}