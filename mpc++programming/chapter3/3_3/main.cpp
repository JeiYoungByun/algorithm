//¾È
#include <iostream>
#include <vector>
#include "Account.h"
using namespace std;

int main(){
    Account a("kitae", 1, 5000);
    a.deposit(50000);
    cout<<a.getOwner()<<"ÀÇ ÀÜ¾×Àº "<<a.inquiry()<<'\n';
    int money = a.withdraw(20000);
    cout<<a.getOwner()<<"ÀÇ ÀÜ¾×Àº "<<a.inquiry()<<'\n';
}