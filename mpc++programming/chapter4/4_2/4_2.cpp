#include <iostream>
using namespace std;

int main() {
    int *a = new int[5];
    int sum = 0;
    for(int i=0; i<5; i++){
        cin>>a[i];
        sum += a[i];
    }
    cout<<"average is "<<(double)sum/5<<'\n';
    delete [] a;

}