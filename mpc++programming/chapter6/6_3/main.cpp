#include <iostream>
using namespace std;

int big(int left, int right, int max = 100){
    int compare;

    if(left>right) compare = left;
    else compare = right;

    if(compare > max) return max;
    else return compare;
}

int main(){
    int x = big(3,5);
    int y = big(300, 60);
    int z = big(30, 60, 50);

    cout<<x<<' '<<y<<' '<<z<<endl;
}

