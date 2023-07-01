//¾È³ç
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Date {
    int year;
    int month;
    int day;

public:
    Date(int a, int b, int c) : year(a), month(b), day(c) {}
    Date(string s) {
        istringstream iss(s);
        vector<int> date_parts;
        string part;
        
        while (getline(iss, part, '/')) {
            date_parts.push_back(stoi(part));
        }

        year = date_parts[0];
        month = date_parts[1];
        day = date_parts[2];

    }
    void show(){
        cout<<year<<"³â"<<month<<"¿ù"<<day<<"ÀÏ\n";
    }
    int getYear(){
        return year;
    }
    int getMonth(){
        return month;
    }
    int getDay(){
        return day;
    }
};