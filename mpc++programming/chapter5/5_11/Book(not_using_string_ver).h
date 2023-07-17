#ifndef BOOK
#define BOOK

#include <iostream>
#include <cstring>
using namespace std;

class Book{
    char *title;
    int price;
public:
    Book(const char* title, int price);
    ~Book();
    void set(const char* title, int price);
    Book(const Book& book);
    void show() {cout<<title<<' '<<price<<"won"<<endl;}
};

#endif