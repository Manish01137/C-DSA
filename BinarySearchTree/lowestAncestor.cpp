#include <iostream>
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

// Lowest Common Ancestor in BST
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {

    if (root == NULL)
        return NULL;

    // Both nodes are in left subtree
    if (p->data < root->data && q->data < root->data)
        return lowestCommonAncestor(root->left, p, q);

    // Both nodes are in right subtree
    if (p->data > root->data && q->data > root->data)
        return lowestCommonAncestor(root->right, p, q);

    // Split point
    return root;
}

// Inorder Successor in BST
Node* inorderSuccessor(Node* root, Node* p) {

    Node* ans = NULL;

    while (root != NULL) {

        if (root->data > p->data) {
            ans = root;
            root = root->left;
        }
        else {
            root = root->right;
        }
    }

    return ans;
}

int main() {

    /*
              20
            /    \
          10      30
         /  \    /  \
        5   15  25  35
    */

    Node* root = new Node(20);
    root->left = new Node(10);
    root->right = new Node(30);
    root->left->left = new Node(5);
    root->left->right = new Node(15);
    root->right->left = new Node(25);
    root->right->right = new Node(35);

    Node* p = root->left->left;   // 5
    Node* q = root->left->right;  // 15

    Node* lca = lowestCommonAncestor(root, p, q);

    if (lca)
        cout << "LCA: " << lca->data << endl;

    Node* successor = inorderSuccessor(root, p);

    if (successor)
        cout << "Inorder Successor of " << p->data << " is " << successor->data << endl;
    else
        cout << "No Inorder Successor exists." << endl;

    return 0;
}