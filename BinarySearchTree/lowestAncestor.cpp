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
TreeNode* lowescommonAncestor(TreeNode* root, TreeNode* p,TreeNode* q){
    if(root==NULL){
        return NULL;
    }
    // both nodes in left subtree
    if(p->val<root->val && q->val<root->val){
        return lowestCommonAncestor(root->left,p,q);
    }
    // both nodes are in right subtree
    if(p->val > root->val && q->val > root->val){
        return lowestCommonAncestor(root->right,p,q);
    }
    // spilit point found
    return root;
}
TreeNode* inorderSuccessor(TreeNode* root, TreeNode* p){
    TreeNode* ans = NULL;
    while(root){
        if(root->val>target){
            ans = root;
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return ans;
}
int main(){

    return 0;
}