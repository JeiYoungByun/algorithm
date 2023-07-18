#include "Book(with_string).h"

int main(){
    Book cpp("MPC++", 10000);
    Book java = cpp;
    java.set("MPJV", 12000);
    cpp.show();
    java.show();
}