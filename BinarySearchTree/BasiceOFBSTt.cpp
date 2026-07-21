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

// Insert into BST
Node* insertIntoBST(Node* root, int data) {

    // Base Case
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    // Recursive Case
    if (data < root->data) {
        root->left = insertIntoBST(root->left, data);
    }
    else {
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

// Take Input
void takeInput(Node* &root) {
    int data;
    cout << "Enter data (-1 to stop): ";

    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

// Inorder Traversal
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {

    Node* root = NULL;

    // Create BST
    takeInput(root);

    // Print BST (Sorted Order)
    cout << "\nInorder Traversal: ";
    inorder(root);

    return 0;
}