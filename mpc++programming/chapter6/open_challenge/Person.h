#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>

using namespace std;

class Person{
    int answer;
    string name;
public:
    Person(){
        cout<<"enter player name : ";
        getline(cin, name);
    }
    int getAnswer(){
        cout<<name<<">>";
        cin>>answer;
        return answer;
    }
    string getName() { return name; }
};

#endif