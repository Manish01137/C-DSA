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
Node* buildTree(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
// pre order Traversal
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
Node* invertTree(Node* root){
    if(root == NULL){
        return NULL;
    }
    swap(root->left,root->right);

    invertTree(root->left);
    invertTree(root->right);

    return root;
}
int main(){
    Node* root = buildTree();
    preorder(root);
    invertTree(root);
    preorder(root);
    return 0;
}