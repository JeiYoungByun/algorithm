#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int sum = 0;
    getline(cin, s);
    for(int i=0; i<s.length()-1; i++){
        if(s.at(i) == 'a') sum++;
    }
    cout<<sum<<endl;
}
