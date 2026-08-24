#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> topologicalSort(vector<vector<int>>& edges, int v, int e) {

    // Create adjacency list
    vector<vector<int>> adj(v);

    for (int i = 0; i < e; i++) {
        int u = edges[i][0];
        int node = edges[i][1];

        adj[u].push_back(node);
    }

    // Find indegree of every node
    vector<int> indegree(v, 0);

    for (int i = 0; i < v; i++) {
        for (auto neighbour : adj[i]) {
            indegree[neighbour]++;
        }
    }

    // Push all nodes having indegree = 0
    queue<int> q;

    for (int i = 0; i < v; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }

    // BFS
    vector<int> ans;

    while (!q.empty()) {

        int front = q.front();
        q.pop();

        // Store answer
        ans.push_back(front);

        // Update neighbours' indegree
        for (auto neighbour : adj[front]) {

            indegree[neighbour]--;

            if (indegree[neighbour] == 0) {
                q.push(neighbour);
            }
        }
    }

    return ans;
}

int main() {

    vector<vector<int>> edges = {
        {0, 1},
        {0, 2},
        {1, 3},
        {2, 3}
    };

    int v = 4;
    int e = edges.size();

    vector<int> ans = topologicalSort(edges, v, e);

    cout << "Topological Sort: ";

    for (auto node : ans) {
        cout << node << " ";
    }

    return 0;
}