#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
    char c[10001];
    int alpha[27] = {0};
    int sum = 0;
    cout<<"영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다.\n";
    cin.getline(c, 10001, ';');
    for(int i=0; i<(int)strlen(c); i++){
        if(isalpha(c[i])){
            c[i] = tolower(c[i]);
            sum++;
            alpha[(char)c[i]-97]++;
        }
    }    

    cout<<"총 알파벳 수 "<<sum<<'\n'<<'\n';

    for(int i=0; i<26; i++){
        cout<<(char)(i+97)<<" ("<<alpha[i]<<") : ";
        for(int j=0; j<alpha[i]; j++) cout<<"*";
        cout<<'\n';
        
    }
}        