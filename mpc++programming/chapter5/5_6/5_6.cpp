#include <iostream>
#include <cstdio>

using namespace std;

char& find(char a[], char c, bool& success){
    int i = 0;
    while(true){
        if(a[i] == c) {success = true; return a[i];}
        i++;
        if(i == 5) break;
    }
    return a[i];
}

int main(){
    char s[] = "Mike";
    bool b = false;
    char& loc = find(s, 'M', b);
    if(b == false){
        cout<<"cannot find M"<<endl;
        return 0;
    }
    loc = 'm';
    cout<<s<<endl;
}