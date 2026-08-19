#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include <queue>

using namespace std;

class Graph {
public:

    bool isCyclicBFS(
        int src,
        unordered_map<int, bool>& visited,
        unordered_map<int, list<int>>& adj
    ) {

        unordered_map<int, int> parent;
        queue<int> q;

        // Starting node
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while (!q.empty()) {

            int front = q.front();
            q.pop();

            // Check all neighbours
            for (auto neighbour : adj[front]) {

                // Already visited and not parent
                if (visited[neighbour] == true &&
                    neighbour != parent[front]) {

                    return true;
                }

                // Not visited
                else if (!visited[neighbour]) {

                    q.push(neighbour);
                    visited[neighbour] = true;
                    parent[neighbour] = front;
                }
            }
        }

        return false;
    }


    string cycleDetection(
        vector<vector<int>>& edges,
        int n,
        int m
    ) {

        // -----------------------------
        // 1. Create adjacency list
        // -----------------------------

        unordered_map<int, list<int>> adj;

        for (int i = 0; i < m; i++) {

            int u = edges[i][0];
            int v = edges[i][1];

            // Undirected graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }


        // -----------------------------
        // 2. Visited array
        // -----------------------------

        unordered_map<int, bool> visited;


        // -----------------------------
        // 3. Handle disconnected graph
        // -----------------------------

        for (int i = 0; i < n; i++) {

            if (!visited[i]) {

                bool ans = isCyclicBFS(
                    i,
                    visited,
                    adj
                );

                if (ans) {
                    return "Yes";
                }
            }
        }

        return "No";
    }
};


int main() {

    Graph g;

    int n = 5;
    int m = 5;

    vector<vector<int>> edges = {
        {0, 1},
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 0}
    };

    cout << g.cycleDetection(edges, n, m);

    return 0;
}