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
int countLeafNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    // current node is leaf
    if(root->left == NULL && root->right == NULL){
        return 1;
    }
    int leftLeaves = countLeafNodes(root->left);
    int rightLeaves = countLeafNodes(root->right);

    return leftLeaves + rightLeaves;
}
int main(){
    cout<<"Enter Tree: ";
    Node* root = buildTree();
    cout<<"Leaf Nodes = "<<countLeafNodes(root);
    return 0;
}