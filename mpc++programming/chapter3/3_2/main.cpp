#include <iostream>
#include "Date.h"
using namespace std;

int main(){
    Date birth(2014, 3, 20);
    Date ind("1945/8/15");
    ind.show();
    cout<<birth.getYear()<<','<<birth.getMonth()<<','<<birth.getDay()<<'\n';
}