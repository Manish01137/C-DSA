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
void inorder(BinaryTreeNode<int>* root,vector<int> &in){
    if(root==NULL){
        return;
    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
TreeNode<int>* flatten(TreeNode<int>* root){
    vector<int> inorderVal;
    // store inorder 
    inorder(root,inorderVal);
    TreeNodeMint>* newRoot = new TreeNode<int>(inorderVal[0]);
    TreeNode<int>* curr = newRoot;
    for(int i=1;i<n;i++){
        TreeNode<int> *temp = new TreeNode<int>(inorderVal[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    // curr->left 
    curr->left = NULL;
    curr->right= NULL;
    return newRoot;
}
int main(){

    return 0;
}