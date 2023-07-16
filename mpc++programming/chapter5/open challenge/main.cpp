#include <iostream>
#include <string>
#include "Morse.h"
using namespace std;

int main(){
    Morse m;
    string text;
    string morse;
    string result;

    cout<<"enter english text. gonna change it to morse"<<endl;
    getline(cin,text);
    m.text2Morse(text, morse);
    cout<<morse<<endl;
    cout<<'\n';

    cout<<"gonna change morse to english"<<endl;
    m.morse2Text(morse, result);
    cout<<result<<endl;

}