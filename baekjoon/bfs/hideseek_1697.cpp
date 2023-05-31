#include <iostream>
#include <vector>
#include <queue>


std::vector<int> v[100001];
bool check[100001];
int dist[100001]; // 각 위치까지의 최소 시간을 저장하기 위한 배열

void bfs(int start){
    std::queue<int> q;
    check[start]=true;
    dist[start] = 0; // 시작 위치의 시간은 0
    q.push(start);
    while (!q.empty()){
        int node = q.front();
        q.pop();
        for (int i=0; i<v[node].size(); i++) {
            int next = v[node][i];
            if (next >= 0 && next <= 100000 && check[next] == false) {
                check[next] = true;
                dist[next] = dist[node] + 1; // 다음 위치의 시간은 현재 위치의 시간 + 1
                q.push(next);
            }
        }
    }
}

int main(){
    int n, k;
    std::cin >> n >> k;

    for(int i=0; i<=100000; i++){
        if (i-1 >= 0) v[i].push_back(i-1);
        if (i+1 <= 100000) v[i].push_back(i+1);
        if (2*i <= 100000) v[i].push_back(2*i);
    }

    bfs(n);
    std::cout << dist[k] << '\n'; // 도착 위치까지의 최소 시간 출력
    
    return 0;
}
