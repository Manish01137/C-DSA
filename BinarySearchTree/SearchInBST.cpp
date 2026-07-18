#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Insert into BST
Node* insertIntoBST(Node* root, int data){

    // Base Case
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data < root->data){
        root->left = insertIntoBST(root->left, data);
    }
    else{
        root->right = insertIntoBST(root->right, data);
    }

    return root;
}

// Take Input
Node* TakeInput(Node* &root){

    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }

    return root;
}

// Search in BST
bool searchInBST(Node* root, int x){

    // Base Case
    if(root == NULL){
        return false;
    }

    if(root->data == x){
        return true;
    }

    if(x < root->data){
        return searchInBST(root->left, x);
    }
    else{
        return searchInBST(root->right, x);
    }
}

// Inorder Traversal
void inorder(Node* root){

    if(root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){

    Node* root = NULL;

    cout << "Enter data to create BST (-1 to stop):" << endl;
    TakeInput(root);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if(searchInBST(root, key)){
        cout << key << " is Present" << endl;
    }
    else{
        cout << key << " is Not Present" << endl;
    }

    return 0;
}