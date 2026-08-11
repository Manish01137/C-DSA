#include<iostream>
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
    void prepareAdjList(unordere_map<int,list> &adjList,vector<pair<int,int>> &degree){
        for(int i=0;i<degree.size();i++){
            int u = edges[i].first;
            int v = edges[i].second;

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    void bfs(unordered_map<int,list<int> &adjList, unordered_map<int,bool> &visited, vector<int> &ans,int node){
        queue<int> q;
        q.push(node);
        visited[node] == 1;
        while(!q.empty()){
            int frontNode = q.front;
            q.pop();

            // store front node int ans;
            ans.push_back(frontNode);
            // traver all neighbours of frontNode
            for(auto i: adjListfrontNode){
                if(!visited[i]){
                    q.push();
                }
            }
        }
    }
    vector<int> BFS(int vertex,vector<pair<int,int>> edges){
        unordered_map<int,list<int> adjList;
        vector<int> ans;
        unordered_map<int,bool> visited;

        prepareAdjList(adjList,edges);

        // check traves all components of a graph
        for(int i=0;i<vertex;i++){
            if(!visited[i]){
                bfs(adjList,visited,ans,i);
            }
        }
    }
};
int main(){

    return 0;
}