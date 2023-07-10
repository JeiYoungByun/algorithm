#include <iostream>
#include <string>
#include <cctype>
#include "Histogram.h"
using namespace std;

Histogram::Histogram(string s) {
    this->s = s;
    cout<<s<<endl;
}

void Histogram::put(string a){
    cout<<a;
    s += a;
}

void Histogram::putc(char b){
    cout<<b;
    s += b;
}

void Histogram::print(){
    int alpha[27] = {0};
    int sum = 0;

    for(int i=0; i<s.length(); i++){
        if(isalpha(s[i])){
            s[i] = tolower(s[i]);
            sum++;
            alpha[(char)s[i]-97]++;
        }
    }

    cout<<endl;    

    cout<<"alphabet's number "<<sum<<'\n'<<'\n';

    for(int i=0; i<26; i++){
        cout<<(char)(i+97)<<" ("<<alpha[i]<<") : ";
        for(int j=0; j<alpha[i]; j++) cout<<"*";
        cout<<'\n';
        
    }
}