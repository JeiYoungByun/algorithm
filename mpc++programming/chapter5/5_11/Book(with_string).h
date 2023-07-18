#include <iostream>
#include <string>

using namespace std;

class Book{
    string title;
    int price;
public:
    Book(string title, int price);
    void set(string title, int price);
    void show() {cout<<title<<' '<<price<<"won"<<endl;}
};