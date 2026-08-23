#include<iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<stack>
using namespace std;
// DFS function for Topological Sort
void topoSort(int node,
              unordered_map<int, bool>& visited,
              stack<int>& s,
              unordered_map<int, list<int>>& adj) {

    // Mark current node as visited
    visited[node] = true;

    // Visit all neighbours
    for (auto neighbour : adj[node]) {

        if (!visited[neighbour]) {
            topoSort(neighbour, visited, s, adj);
        }
    }

    // Push node after processing all neighbours
    s.push(node);
}

// manin topological sort function
vector<int> topologicalSort(vector<vector<int>> &edges,int v,int e){
    // create adjaceny list
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++){
        int u = edges[i][0];
        int v2 = edges[i][1];

        adj[u].push_back(v2);
    }

    // step 2 create visited map
    unordered_map<int,bool> visited;

    // step 3 stack to store topological order
    stack<int> s;

    // step 4 call DFS for every vertex
    for(int i=0;i<v;i++){
        if(!visited[i]){
            topoSort(i,visited,s,adj);
        }
    }
    //pop elelment 
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}
int main(){
    vector<vector<int>> edges = {
        {5, 0},
        {5, 2},
        {4, 0},
        {4, 1},
        {2, 3},
        {3, 1}
    };

    int v = 6;
    int e = edges.size();

    vector<int> ans = topologicalSort(edges, v, e);

    cout << "Topological Sort: ";

    for (int i : ans) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}