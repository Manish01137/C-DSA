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
    if(data==-1){
        return NULL;
    }
    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
int countInternalNodes(Node* root){
    // base case
    if(root==NULL){
        return 0;
    }
    // leaf node
    if(root->left == NULL && root->left == NULL){
        return 0;
    }
    int left = countInternalNodes(root->left);
    int right = countInternalNodes(root->right);
    return left + right + 1;
}
int main(){
    cout<<"Enter Tree: ";
    Node* root = buildTree();
    cout<<"Internal Nodes = "<<countInternalNodes(root);
    return 0;
}