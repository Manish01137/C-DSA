#include<iostream>
using namespace std;
class TreeNode{
   public:
   int val;
   TreeNode* left;
   TreeNode* right;

   TreeNode(int value){
    val = value;
    left = NULL;
    right = NULL;

   }
};

TreeNode* insert(TreeNode* root,int value){
    // if tree is empty
    if(root==NULL){
        return new TreeNode(value);
    }
    // insert into left subtree
    if(value<root->val){
        root->left = insert(root->left,value);
    }
    // insert into right subtree
    else{
        root->right = insert(root->right,value);
    }
    return root;
}
// Inorder traversal
void inorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
// Reverse inorder helper function
void solve(TreeNode* root,int &sum){
    if(root==NULL){
        return;
    }
    solve(root->right,sum);
    // add current value to sum
    sum+=root->val;
    //update current node
    root->val = sum;
    // visite left subtree
    solve(root->left,sum);

}
TreeNode* convertBST(TreeNode* root){
    int sum = 0;
    solve(root,sum);
    return root;
}
int main(){
    TreeNode* root = NULL;
    // creating BST
    root = insert(root,4);
    root = insert(root,1);
    root = insert(root,6);
    root = insert(root,0);
    root = insert(root,2);
    root = insert(root,5);
    root = insert(root,3);
    root = insert(root,8);

    cout<<"Original BST (Inorder)";
    inorder(root);

    cout<<endl;

    //convert to greater tree
    convertBST(root);

    cout<<"Greater Tree(inorder)";
    inorder(root);

    cout<<endl;
    
    return 0;
}