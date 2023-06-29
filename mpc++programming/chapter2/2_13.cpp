#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int HowMany = 0;
    bool terminate = true;

    cout<<"***** 승리장에 오신 것을 환영합니다. *****\n";

    while(terminate){
        cout<<"짬뽕:1, 짜장:2, 군만두:3, 종료:4>>\n";
        cin>>num;
        switch(num){
            case 1:
                cout<<"몇인분?";
                cin>>HowMany;
                cout<<"짬뽕 "<<HowMany<<"인분 나왔습니다\n";
                break;
            case 2:
                cout<<"몇인분?";
                cin>>HowMany;
                cout<<"짜장 "<<HowMany<<"인분 나왔습니다\n";
                break;
            case 3:
                cout<<"몇인분?";
                cin>>HowMany;
                cout<<"군만두 "<<HowMany<<"인분 나왔습니다\n";
                break;
            case 4:
                terminate = false;
                break;
            default:
                cout<<"다시 주문하세요!!\n";
        }
    }

    cout<<"오늘 영업은 끝났습니다.\n";
}