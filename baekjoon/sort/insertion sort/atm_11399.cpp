#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n = 0;
    cin>>n;
    vector<int> p(n,0);
    for(int i=0; i<n; i++){
        cin>>p[i];
    }
    int tmp=0;
    for(int i=1; i<n; i++){
        int j=0;
        tmp = p[i];
        for(j = i-1; j>=0; j--){
            if(tmp<p[j]) p[j+1] = p[j];
            else break;
        }
        p[j+1] = tmp;
    }
    
    int count = 0;
    for(int i=0; i<n; i++){
        count += p[i]*(n-i);
    }

    cout<<count<<endl;

    return 0;
}