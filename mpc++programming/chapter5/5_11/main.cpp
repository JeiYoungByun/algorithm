#include "Book(not_using_string_ver).h"

int main(){
    Book cpp("MPC++", 10000);
    Book java = cpp;
    java.set("MPJV", 12000);
    cpp.show();
    java.show();
}