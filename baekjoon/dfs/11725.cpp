/* 백준 11725번 : 트리의 부모 찾기(dfs)
   제한시간 : 1초
   dfs를 스택으로 구현했습니다.
*/
#include <iostream>
#include <vector>
#include <stack>

std::vector<std::vector<int>> graph(100001); //그래프의 노드와 child를 연결하는 2차원 벡터 생성 : 바깥 크기 100001
std::vector<bool> visited(100001, false);    //방문 여부 체크용 벡터
std::vector<int> parent(100001);             //각 노드의 parent 저장용 벡터

void dfs(int); //함수선언

int main(){
    std::ios_base::sync_with_stdio(false); // 이 코드는 C++의 std::cin / std::cout과 C의 scanf / printf 간의 동기화를 끕니다.(속도 향상)
    std::cin.tie(NULL); // cin과 cout의 바인딩을 끊어서 입출력 속도 향상

    int n, a, b;
    std::cin>>n;
    for(int i=0; i<n-1; i++){
        std::cin>>a>>b;
        graph[a].push_back(b);// 두 노드를 연결
        graph[b].push_back(a);

    }

    dfs(1); //dfs함수를 root노드 1부터 실행

    for(int i=2; i<=n; i++){ 
        std::cout<<parent[i]<<"\n"; //2부터 n까지의 parent node 출력
    }

    return 0;
}

void dfs(int start){
    std::stack<int> st; // 스택 생성
    st.push(start);     // root값 스택에 푸시

    while(!st.empty()){
        int now = st.top(); // 스택 값 꺼내고 pop 
        st.pop();

        if(visited[now]) continue; // 이미 방문했으면 아래 과정 스킵

        visited[now] = true;       // 방문 check

        for(int i = 0; i < graph[now].size(); i++){ // 현재 노드의 children이 방문했는지를 체크하고 
            int dest = graph[now][i];               // 아니면 children의 parent값을 parent벡터에 저장하고                                         
            if(!visited[dest]){                     // child를 하나씩 스택에 푸시
                parent[dest] = now;
                st.push(dest);
            }
        }
    }    
}
