#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

// insert into BST
TreeNode* insertIntoBST(TreeNode* root,int value){
    // base case 
    if(root==NULL){
        return new TreeNode(value);
    }
    // insert into left subtree
    if(value<root->data){
        root->left = insertIntoBST(root->left,value);
    }
    // insert into right subtree
    else{
        root->right = insertIntoBST(root->right,value);
    }

    return root;
}
// inorder traversal
void inorder(TreeNode* root,vector<int>& values){
    if(root==NULL){
        return;
    }
    inorder(root->left,values);
    values.push_back(root->data);
    inorder(root->right,values);
}
// preorder traversal for painting
void preorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
// build balalced BST from sorted array
TreeNode* buildBalancedBST(vector<int>& values,int start,int end){
    // Base case
    if(start>end){
        return NULL;
    }
    int mid = start + (end-start)/2;
    // middle become root
    TreeNode* root = new TreeNode(values[mid]);

    // build left subtree
    root->left = buildBalancedBST(values,start,mid-1);

    // build right subgree
    root->right = buildBalancedBST(values,mid+1,end);

    return root;
}
// main function to balance bst
TreeNode* balanceBST(TreeNode* root){
    vector<int> values
    inorder(root,values);

    // step 2
    // build 
    return buildBalancedBST(values,0, values.size()-1);
}
int main(){

}