#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Define the Graph as an adjacency list
vector<vector<int>> graph;
vector<bool> visited;

void DFS(int start) {
    stack<int> st;
    st.push(start);

    while(!st.empty()){
        int now = st.top();
        st.pop();

        if(visited[now])
            continue;

        visited[now] = true;
        cout << now << " ";

        for(int i = 0; i < graph[now].size(); i++){
            int dest = graph[now][i];
            if(!visited[dest]){
                st.push(dest);
            }
        }
    }
}

int main() {
    int n; // number of nodes
    cin >> n;
    int s; // start node
    cin >> s;
    
    graph.resize(n+1);
    visited.resize(n+1, false);

    // Assuming that the edges are given in pairs (i,j) where i is the start node and j is the end node
    for(int i=0; i<n; i++){
        int start_node, end_node;
        cin >> start_node >> end_node;
        graph[start_node].push_back(end_node);
    }

    DFS(s);

    return 0;
}
