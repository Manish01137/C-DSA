#include <iostream>
#include <queue>
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

// Build Tree (Preorder Input)
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

// Zig Zag Traversal
vector<int> zigZagTraversal(Node* root) {

    vector<int> result;

    if (root == NULL)
        return result;

    queue<Node*> q;
    q.push(root);

    bool leftToRight = true;

    while (!q.empty()) {

        int size = q.size();

        vector<int> ans(size);

        // Process one level
        for (int i = 0; i < size; i++) {

            Node* frontNode = q.front();
            q.pop();

            // Find index according to direction
            int index = leftToRight ? i : size - i - 1;

            ans[index] = frontNode->data;

            if (frontNode->left)
                q.push(frontNode->left);

            if (frontNode->right)
                q.push(frontNode->right);
        }

        // Change direction
        leftToRight = !leftToRight;

        // Store current level
        for (auto i : ans) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {

    cout << "Enter Tree (Preorder with -1 for NULL):" << endl;

    Node* root = buildTree();

    vector<int> ans = zigZagTraversal(root);

    cout << "Zig Zag Traversal: ";

    for (int i : ans) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}