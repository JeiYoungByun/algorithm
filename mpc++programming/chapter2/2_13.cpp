#include <iostream>
using namespace std;

int main(){
    int num = 0;
    int HowMany = 0;
    bool terminate = true;

    cout<<"***** �¸��忡 ���� ���� ȯ���մϴ�. *****\n";

    while(terminate){
        cout<<"«��:1, ¥��:2, ������:3, ����:4>>\n";
        cin>>num;
        switch(num){
            case 1:
                cout<<"���κ�?";
                cin>>HowMany;
                cout<<"«�� "<<HowMany<<"�κ� ���Խ��ϴ�\n";
                break;
            case 2:
                cout<<"���κ�?";
                cin>>HowMany;
                cout<<"¥�� "<<HowMany<<"�κ� ���Խ��ϴ�\n";
                break;
            case 3:
                cout<<"���κ�?";
                cin>>HowMany;
                cout<<"������ "<<HowMany<<"�κ� ���Խ��ϴ�\n";
                break;
            case 4:
                terminate = false;
                break;
            default:
                cout<<"�ٽ� �ֹ��ϼ���!!\n";
        }
    }

    cout<<"���� ������ �������ϴ�.\n";
}