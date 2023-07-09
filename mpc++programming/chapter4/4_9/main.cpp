#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main() {
    Person *p = new Person[3];
    string name;
    string tel;
    string search;
    for(int i=0; i<3; i++){
        cout<<"Person "<<i+1<<">> ";
        getline(cin,name,' ');
        getline(cin,tel);
        p[i].set(name, tel);
    }
    cout<<"Names of all people are "<<p[0].getName()<<' '<<p[1].getName()<<' '<<p[2].getName()<<'\n';
    cout<<"Gonna search phone number. input name>>";
    getline(cin,search);
    if(search == p[0].getName()) cout<<"Phone number is "<<p[0].getTel()<<'\n';
    else if(search == p[1].getName()) cout<<"Phone number is "<<p[1].getTel()<<'\n';
    else cout<<"Phone number is "<<p[2].getTel()<<'\n';
    delete [] p;
}