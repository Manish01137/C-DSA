#include<iostream>
using namespace std;
void dfs(int node, unordered_map<int,bool> &visited
  ){
component.push_back(node);
for(auto i:adj[node]){
    if(!visited)
}
    }

vector<vector<int>> depthFirstSearch(int v, int E,vector<vecotor<int>> &edges){
    // prepare adjlist
    unordered_map<int,list<int> adj;
    for(int i=0;i<edges.size();i++){
        int u = edges[i][o];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> ans;
    unordered_map<int,boo> visited;

    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int> component;
            dfs(i,visited,adjList,component);
            ans.push_back(component);
        }
    }
}
int main(){

    return 0;
}