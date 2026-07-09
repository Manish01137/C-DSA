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

    if (data == -1)
        return NULL;

    Node* root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Left Boundary
void traverseLeft(Node* root, vector<int> &ans) {

    if (root == NULL)
        return;

    // Ignore leaf node
    if (root->left == NULL && root->right == NULL)
        return;

    ans.push_back(root->data);

    if (root->left)
        traverseLeft(root->left, ans);
    else
        traverseLeft(root->right, ans);
}

// Leaf Nodes
void traverseLeaf(Node* root, vector<int> &ans) {

    if (root == NULL)
        return;

    if (root->left == NULL && root->right == NULL) {
        ans.push_back(root->data);
        return;
    }

    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
}

// Right Boundary
void traverseRight(Node* root, vector<int> &ans) {

    if (root == NULL)
        return;

    // Ignore leaf node
    if (root->left == NULL && root->right == NULL)
        return;

    if (root->right)
        traverseRight(root->right, ans);
    else
        traverseRight(root->left, ans);

    // Push while coming back
    ans.push_back(root->data);
}

// Boundary Traversal
vector<int> boundary(Node* root) {

    vector<int> ans;

    if (root == NULL)
        return ans;

    // Root
    ans.push_back(root->data);

    // Left Boundary
    traverseLeft(root->left, ans);

    // Leaf Nodes
    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);

    // Right Boundary
    traverseRight(root->right, ans);

    return ans;
}

int main() {

    cout << "Enter Tree (Preorder with -1):" << endl;

    Node* root = buildTree();

    vector<int> ans = boundary(root);

    cout << "Boundary Traversal: ";

    for (int x : ans)
        cout << x << " ";

    cout << endl;

    return 0;
}