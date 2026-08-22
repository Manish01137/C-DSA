#include<iostream>
using namespace std;
class TreeNode{
   public:
   TreeNode* left;
   TreeNode* right;
   
   TreeNode(int value){
      val = value;
      left = NULL;
      right = NULL;
   }
};
// insert into BST
TreeNode* insert(TreeNode* root,int value){
    if(root==NULL){
        return new TreeNode(value);
    }
    if(value<root->val){
        root->left = insert(root->left,value);
    }
    else{
        root->right = insert(root->right,value);
    }
    return root;
}

// inorder traversal
void inorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->left<<" ";
    inorder(root->right);
}

// Trim BST
TreeNode* trimBST(TreeNode* root,int low,int high){
    // Base case
    if(root==NULL){
        return NULL;
    }
    // current value is too small
    if(root->val<low){
        // left subtree is also too small
        return trimBST(root->right,low,high);
    }
    // current value is too large
    if(root->val>high){
        // Right subtree is also too large
        return trimBST(root->left,low,high);
    }
    // current node is valide
    root->left = trimBST(root->left,low,high);
    root->right = trimBST(root->right,low,high);
    return root;
}
int main(){
      TreeNode* root = NULL;

    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 10);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 14);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 13);

    cout << "Original BST: ";
    inorder(root);

    cout << endl;

    int low = 4;
    int high = 13;

    root = trimBST(root, low, high);

    cout << "Trimmed BST: ";
    inorder(root);

    cout << endl;
    return 0;
}