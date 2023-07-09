#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout<<"input 1 sentence.(if you input exit, the program will finish)\n";
    while(true){
        cout<<">>";
        getline(cin, s);
        if(s == "exit") break;
        for(int i=0; i<s.length(); i++){
            cout<<s[s.length()-1-i];
        }
        cout<<endl;
    }
}