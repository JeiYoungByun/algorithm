#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int sum = 0;
    cout<<"������ �Է��ϼ���>>";
    cin>>n;
    for(int k=1; k<n+1; k++) sum += k;
    cout<<"1���� 10������ ���� "<<sum<<"�Դϴ�.\n";
}