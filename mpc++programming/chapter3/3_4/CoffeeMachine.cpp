#include <iostream>
#include "CoffeeMachine.h"
using namespace std;

void CoffeeMachine::drinkEspresso(){
    coffee--;
    water--;
}

void CoffeeMachine::drinkAmericano(){
    coffee--;
    water -= 2;
}

void CoffeeMachine::drinkSugarCoffee(){
    coffee--;
    water -= 2;
    sugar--;
}

void CoffeeMachine::show(){
    cout<<"Coffee Machine's status, coffee:"<<coffee<<" water:"<<water<<" sugar:"<<sugar<<'\n';
}

void CoffeeMachine::fill(){
    coffee = 10;
    water = 10; 
    sugar = 10;
}