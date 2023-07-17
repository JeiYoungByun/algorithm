#include "Book(not_using_string_ver).h"

Book::Book(const char* title, int price){
    unsigned int len = strlen(title);
    this->title = new char [len+1];
    strcpy(this->title, title);
    this->price = price;
}

Book::~Book(){
    delete [] title;
}

void Book::set(const char* title, int price){
    if(this->title) delete [] this->title;
    unsigned int len = strlen(title);
    this->title = new char [len+1];
    strcpy(this->title, title);
    this->price = price;
}

/* default copy instructor

Book::Book(const Book& book){
    this->title = book.title;
    this->price = book.price;
}*/

Book::Book(const Book& book){
    unsigned int len = strlen(book.title);
    this->title = new char [len+1];
    strcpy(this->title, book.title);
    this->price = book.price;
}