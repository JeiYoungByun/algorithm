#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int num = 0;
    int sum = 0;

    cout<<"에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다.\n";

    while(sum<=20000){
        cout<<"주문>> ";
        cin>>s>>num;
        if(s=="에스프레소") {
        sum += 2000*num;
        cout<<2000*num<<"원입니다. 맛있게 드세요\n";
        }
        else if(s=="아메리카노") {
        sum += 2300*num;
        cout<<2300*num<<"원입니다. 맛있게 드세요\n";
        }
        if(s=="카푸치노") {
        sum += 2500*num;
        cout<<2500*num<<"원입니다. 맛있게 드세요\n";
        }
    }

    cout<<"오늘 "<<sum<<"원을 판매하여 카페를 닫습니다. 내일 봐요~~~";
}