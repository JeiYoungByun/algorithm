#include <iostream>
#include <vector>
#include <queue>

std::vector<int> graph[101]; // 그래프벡터
std::vector<bool> visited(101); // 방문했는지 체크하는 벡터
std::vector<int> depth(101);   // 각 노드의 depth체크

void bfs(int, int); 

int main(){
    int n, m, a, b, x, y;
    std::cin>>n; // 그래프의 V값
    std::cin>>a>>b; // 촌수 계산할 두 노드
    std::cin>>m;  // 그래프의 E값

    for(int i=0; i<m; i++){
        std::cin>>x>>y;
        graph[x].push_back(y); //두 노드 입력받아서 push back으로 연결
        graph[y].push_back(x);
    }

    bfs(a, b);

    std::cout<<depth[b]<<std::endl;
}

void bfs(int alpha, int beta){
    std::queue<int> q;  // 큐 선언
    visited[alpha] = true; // 방문표시
    depth[alpha] = 0; // root node값 0으로 초기화
    q.push(alpha);  // 큐에 푸시

    while(!q.empty()){
        int node = q.front(); //큐에서 front node값을 꺼내오고 pop
        q.pop();
        for(int i=0; i<graph[node].size(); i++){
            int next = graph[node][i];
            if (visited[next]==false){
                visited[next]=true; // 방문하지 않았으면 next값을 push하고 depth를 1추가
                depth[next] = depth[node] + 1;
                q.push(next);
            }
        }
    }

    if(depth[beta]==0) depth[beta] = -1; // 두 노드가 연결되지 않았으면 도착 노드의 depth값을 -1로 변경

}
    