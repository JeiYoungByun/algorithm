#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstdio>

using namespace std;

void Tsort(vector<vector<int>>&, vector<int>&, vector<int>&);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin>>n>>m;

    vector<vector<int>> graph(n+1);
    vector<int> indegree(n+1, 0);
    vector<int> result(n, 0);

    for(int i=0; i<m; i++){
        int a, b;
        cin>>a>>b;
        graph[a].push_back(b);
        indegree[b]++;
    }
    
    Tsort(graph, indegree, result);

    for(int i=0; i<result.size(); i++) printf("%d ", result[i]);

    printf("\n");

    return 0;
}

void Tsort(vector<vector<int>>& graph, vector<int>& indegree, vector<int>& result){
    queue<int> q;
    int num = 0;
    
    for(int i=1; i<graph.size(); i++){
        if(indegree[i]==0) q.push(i);
    }
    
    while(!q.empty()){
        int now = q.front();
        q.pop();

        result[num++] = now;
        
        for(int i=0; i<graph[now].size(); i++){
            indegree[graph[now][i]]--;
            if(indegree[graph[now][i]]==0) q.push(graph[now][i]);
        }
    }
}