#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>> adj;
    void addEdge(int u, int v, bool direction){
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void bfs(int start){
        unordered_map<int,bool> visited;
        queue<int> q;
        // step 1;
        q.push(start);
        visited[start] = true;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cout<<node<<" ";

            // neighbors
            for(auto neighbour: adj[node]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }
};
class Solution {
public:
    void bfs(int node, vector<vector<int>>& isConnected, vector<bool>& visited) {

        queue<int> q;
        q.push(node);
        visited[node] = true;

        while(!q.empty()) {
            int front = q.front();
            q.pop();

            for(int j = 0; j < isConnected.size(); j++) {
                if(isConnected[front][j] == 1 && !visited[j]) {
                    q.push(j);
                    visited[j] = true;
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {

        int n = isConnected.size();
        vector<bool> visited(n, false);

        int count = 0;

        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                bfs(i, isConnected, visited);
                count++;  // new province found
            }
        }

        return count;
    }
};
int main(){
    Graph g;
    g.addEdge(1,2,0);
    g.addEdge(1,4,0);
    g.addEdge(2,3,0);
    g.addEdge(4,5,0);

    g.bfs(1);
    return 0;
}