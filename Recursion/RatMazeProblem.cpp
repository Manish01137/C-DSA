#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int x, int y,
            vector<vector<int>> &maze,
            vector<vector<int>> &visited,
            int n) {

    if (x >= 0 && y >= 0 &&
        x < n && y < n &&
        maze[x][y] == 1 &&
        visited[x][y] == 0)
        return true;

    return false;
}

void solve(int x, int y,
           vector<vector<int>> &maze,
           int n,
           vector<string> &ans,
           string path,
           vector<vector<int>> &visited) {

    // Destination reached
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // Down
    if (isSafe(x + 1, y, maze, visited, n))
        solve(x + 1, y, maze, n, ans, path + 'D', visited);

    // Left
    if (isSafe(x, y - 1, maze, visited, n))
        solve(x, y - 1, maze, n, ans, path + 'L', visited);

    // Right
    if (isSafe(x, y + 1, maze, visited, n))
        solve(x, y + 1, maze, n, ans, path + 'R', visited);

    // Up
    if (isSafe(x - 1, y, maze, visited, n))
        solve(x - 1, y, maze, n, ans, path + 'U', visited);

    // Backtrack
    visited[x][y] = 0;
}

vector<string> ratInMaze(vector<vector<int>> &maze, int n) {

    vector<string> ans;

    if (maze[0][0] == 0)
        return ans;

    vector<vector<int>> visited(n, vector<int>(n, 0));

    solve(0, 0, maze, n, ans, "", visited);

    return ans;
}

int main() {

    int n;
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> maze[i][j];

    vector<string> result = ratInMaze(maze, n);

    for (auto path : result)
        cout << path << endl;

    return 0;
}