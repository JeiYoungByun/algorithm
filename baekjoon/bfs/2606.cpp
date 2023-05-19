#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> a[101];
bool check[101];
int count = 0;

void bfs(int start) {
    queue<int> q;
    check[start] = true;
    q.push(start);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        count++;
        for (int i=0; i<a[node].size(); i++) {
            int next = a[node][i];
            if (check[next] == false) {
                check[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    bfs(1);
    cout << count - 1 << '\n';
    return 0;
}