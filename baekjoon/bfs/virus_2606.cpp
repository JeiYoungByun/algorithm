#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> a[101];//그래프 벡터
bool check[101]; //방문 체크용 배열
int count = 0;  //바이러스 개수 세기

void bfs(int start) {
    queue<int> q;
    check[start] = true;
    q.push(start);
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        count++; // 큐를 front, pop할때마다 1씩 더해줌(바이러스 걸린 컴 개수)
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
    int n, m; //각각 그래프의 V, E
    cin >> n >> m;
    for (int i=0; i<m; i++) {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    bfs(1);
    cout << count - 1 << '\n'; // 바이러스의 걸린 컴퓨터들 중 1을 제외하고 세야하니까 -1을해줌
    return 0;
}