#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;

class Account {
    int id, balance;
    string s;
    string& k = s;

public:
    Account(string name, int a, int b) : s(name), id(a), balance(b) {
    }
    void deposit(int plus){
        balance += plus;
    }
    string& getOwner(){
        return k;
    }
    int inquiry(){
        return balance;
    }
    int withdraw(int minus){
        balance -= minus;
        return minus;
    }    
};

#endif