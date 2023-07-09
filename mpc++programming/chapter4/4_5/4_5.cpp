#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string s;
    srand((unsigned)time(NULL));
    while(true) {
        getline(cin, s);
        if(s == "exit") break;
        int n = rand()%s.size();
        char a = rand()%26 + 97;
        s[n] = a;
        cout<<s<<endl;
    }
}
