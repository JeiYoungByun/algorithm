#include <iostream>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
    char c[10001];
    int alpha[27] = {0};
    int sum = 0;
    cout<<"���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�.\n";
    cin.getline(c, 10001, ';');
    for(int i=0; i<(int)strlen(c); i++){
        if(isalpha(c[i])){
            c[i] = tolower(c[i]);
            sum++;
            alpha[(char)c[i]-97]++;
        }
    }    

    cout<<"�� ���ĺ� �� "<<sum<<'\n'<<'\n';

    for(int i=0; i<26; i++){
        cout<<(char)(i+97)<<" ("<<alpha[i]<<") : ";
        for(int j=0; j<alpha[i]; j++) cout<<"*";
        cout<<'\n';
        
    }
}        