#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int num = 0;
    int sum = 0;

    cout<<"���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";

    while(sum<=20000){
        cout<<"�ֹ�>> ";
        cin>>s>>num;
        if(s=="����������") {
        sum += 2000*num;
        cout<<2000*num<<"���Դϴ�. ���ְ� �弼��\n";
        }
        else if(s=="�Ƹ޸�ī��") {
        sum += 2300*num;
        cout<<2300*num<<"���Դϴ�. ���ְ� �弼��\n";
        }
        if(s=="īǪġ��") {
        sum += 2500*num;
        cout<<2500*num<<"���Դϴ�. ���ְ� �弼��\n";
        }
    }

    cout<<"���� "<<sum<<"���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~";
}