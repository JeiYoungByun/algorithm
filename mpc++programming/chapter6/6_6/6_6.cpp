#include <iostream>
#include <vector>

using namespace std;

class ArrayUtility2{
public:    
    static int* concat(int s1[], int s2[], int size);
    static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size){
    int* plus = new int [size];

    for(int i=0; i<size; i++){
        if(i<size/2) plus[i] = s1[i];
        else plus[i] = s2[i-size/2];
    }

    return plus;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize){
    bool dupl = false;
    int* minus = new int [size];

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(s1[i] == s2[j]){
                dupl = true;
                break;
            }
        }
        if(dupl==false) {
            minus[retSize++] = s1[i];
            dupl = false;
        }
    }

    if (retSize == 0) return NULL;
    return minus;
}

int main(){
    int x[5], y[5];
    int retSize = 0;
    
    cout<<"input x array: ";
    for(int i=0; i<5; i++){
        cin>>x[i];
    }
    
    cout<<"input y array: ";
    for(int i=0; i<5; i++){
        cin>>y[i];
    }

    int* a = ArrayUtility2::concat(x, y, 10);

    cout<<"plus array: ";
    for(int i=0; i<10; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;

    a = ArrayUtility2::remove(x, y, 5, retSize);

    cout<<"minus array's number: "<<retSize<<endl;
    for(int i=0; i<retSize; i++){
        cout<<a[i]<<' ';
    }

    delete [] a;
}