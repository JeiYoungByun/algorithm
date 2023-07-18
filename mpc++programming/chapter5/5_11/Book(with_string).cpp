#include "Book(with_string).h"

Book::Book(string title, int price){
    this->title = title;
    this->price = price;
}

void Book::set(string title, int price){
    this->title = title;
    this->price = price;
}
