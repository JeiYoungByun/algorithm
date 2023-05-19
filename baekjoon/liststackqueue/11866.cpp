#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, k;
    
    cin>>n>>k;

    vector<int> v;
    queue<int> q;

    for(int i=0; i<n; i++){
        v.push_back(i+1);
    }
    
    for (int i = 0; i < n; i++) {
        int idx = (k - 1) % v.size(); 
        q.push(v[idx]);
        v.erase(v.begin() + idx);
        rotate(v.begin(), v.begin() + idx, v.end());
    }

    for (int i = 0; i < n; i++) {
    if (i == 0) {
        cout << "<";
    }
    cout << q.front();
    q.pop();

    if (i != n - 1) {
        cout << ", ";
    } else {
        cout << ">";
    }
    }

    return 0;
}