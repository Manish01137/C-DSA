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
bool hashPathSum(TreeNode* root,int targetSum){
    if(root==NULL){
        return false;
    }
    if(root->left == NULL && root->right == NULL){
        return targetSum == root->val;
    }
    targetSum -= root->val;

    return hashPathSum(root->left,targetSum) || hashPathSum(root->right,targetSum);
}
int main(){

    return 0;
}