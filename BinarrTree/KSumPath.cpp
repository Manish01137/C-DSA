#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Build Tree
Node* buildTree() {
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Function to count K Sum Paths
void solve(Node* root, int k, int &count, vector<int> &path) {

    // Base Case
    if (root == NULL) {
        return;
    }

    // Add current node to path
    path.push_back(root->data);

    // Left subtree
    solve(root->left, k, count, path);

    // Right subtree
    solve(root->right, k, count, path);

    // Check all paths ending at current node
    int sum = 0;

    for (int i = path.size() - 1; i >= 0; i--) {
        sum += path[i];

        if (sum == k) {
            count++;
        }
    }

    // Backtracking
    path.pop_back();
}

int sumK(Node* root, int k) {

    vector<int> path;
    int count = 0;

    solve(root, k, count, path);

    return count;
}

int main() {

    /*
    Example Input:

    1
    3
    2
    -1
    -1
    1
    -1
    -1
    -1
    5
    2
    -1
    -1
    6
    -1
    -1
    5
    */

    Node* root = buildTree();

    int k;
    cin >> k;

    cout << sumK(root, k);

    return 0;
}