#include <iostream>
#include <vector>
using namespace std;

// Define the Graph as an adjacency list
vector<vector<int>> graph;
vector<bool> visited;
vector<bool> isInStack;

bool findCycle(int start) {
    if(isInStack[start])
        return true;
    if(visited[start])
        return false;
    
    visited[start] = true;
    isInStack[start] = true;
    
    for(int i = 0; i < graph[start].size(); i++){
        int dest = graph[start][i];
        if(findCycle(dest))
            return true;
    }

    isInStack[start] = false;
    return false;
}

int main() {
    int n; // number of nodes
    cin >> n;
    
    graph.resize(n+1);
    visited.resize(n+1, false);
    isInStack.resize(n+1, false);

    // Assuming that the edges are given in pairs (i,j) where i is the start node and j is the end node
    for(int i=0; i<n; i++){
        int start_node, end_node;
        cin >> start_node >> end_node;
        graph[start_node].push_back(end_node);
    }

    bool hasCycle = findCycle(1); // Start from node 1. Modify as per your requirement

    if(hasCycle)
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";

    return 0;
}
