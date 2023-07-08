#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int sum = 0;
    int index = 0;
    getline(cin, s);
    while(true){
        index = s.find('a', index);
        if(index == -1) break;
        index++;
        sum++;
    }
    cout<<sum<<endl;
}