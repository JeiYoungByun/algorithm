#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cout<<"���ڿ� �Է�>>";
    getline(cin, s);
    int n = s.length();
    for(int i=1; i<n+1; i++){
        for(int j=0; j<i; j++){
            cout<<s[j];
        }
        cout<<'\n';
    }
}