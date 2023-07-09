#include "CoffeeVendingMachine.h"
#include <iostream>
using namespace std;

void CoffeeVendingMachine::fill(){
    for(int i=0; i<3; i++){
        tong[i].fill();
    }
}

void CoffeeVendingMachine::selectEspresso(){
    if((tong[0].getSize() <= 0)||(tong[1].getSize() <= 0)) {
        cout<<"We don't have enough ingredients.\n";
        return;
    }
    tong[0].consume();
    tong[1].consume();
    cout<<"enjoy Espresso\n";
}

void CoffeeVendingMachine::selectAmericano(){
    if((tong[0].getSize() <= 0)||(tong[1].getSize() <= 1)) {
        cout<<"We don't have enough ingredients.\n";
        return;
    }
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    cout<<"enjoy Americano\n";
}

void CoffeeVendingMachine::selectSugarCoffee(){
    if((tong[0].getSize() <= 0) || (tong[1].getSize() <= 1) || (tong[2].getSize() <= 0)) {
        cout<<"We don't have enough ingredients.\n";
        return;
    }
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    tong[2].consume();
    cout<<"enjoy sugarcoffee\n";
}

void CoffeeVendingMachine::show(){
    cout<<"coffee "<<tong[0].getSize()<<", water "<<tong[1].getSize()<<", sugar "<<tong[2].getSize()<<'\n';
}

void CoffeeVendingMachine::run(){
    cout<<"***** gonna run coffeevendingmachine *****\n";
    while(true) {
        int select = 0;
        cout<<"press menu(1: espresso 2: americano, 3: sugar coffee, 4: view remaining capacity, 5: refill) if you press 0, machine gonna stop>> ";
        cin>>select;
        if(select == 0){
            cout<<"finish\n";
            break;
        }
        switch(select){
            case 1 : 
                selectEspresso();
                break;
            case 2 : 
                selectAmericano();
                break;
            case 3 :
                selectSugarCoffee();
                break;
            case 4 :
                show();
                break;
            case 5 : 
                fill();
                show();
                break;
            default : 
                cout<<"press again\n";
        }
    }
}