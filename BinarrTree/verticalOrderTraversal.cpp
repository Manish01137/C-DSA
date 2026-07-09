#include <iostream>
#include <queue>
#include <vector>
#include <map>
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

// Build Tree (Preorder)
Node* buildTree() {

    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    Node* root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Vertical Order Traversal
vector<int> verticalOrder(Node* root) {

    map<int, map<int, vector<int>>> nodes;

    queue<pair<Node*, pair<int, int>>> q;

    vector<int> ans;

    if (root == NULL)
        return ans;

    q.push(make_pair(root, make_pair(0, 0)));

    while (!q.empty()) {

        pair<Node*, pair<int, int>> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;

        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode->data);

        if (frontNode->left) {
            q.push(make_pair(frontNode->left,
                             make_pair(hd - 1, lvl + 1)));
        }

        if (frontNode->right) {
            q.push(make_pair(frontNode->right,
                             make_pair(hd + 1, lvl + 1)));
        }
    }

    // Store answer
    for (auto i : nodes) {
        for (auto j : i.second) {
            for (auto k : j.second) {
                ans.push_back(k);
            }
        }
    }

    return ans;
}

int main() {

    cout << "Enter Tree (Preorder with -1):" << endl;

    Node* root = buildTree();

    vector<int> ans = verticalOrder(root);

    cout << "Vertical Order Traversal: ";

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}