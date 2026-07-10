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
int minDepth(Node* root){
    // base case
    if(root == NULL){
        return 0;
    }
    // only right subtree exists
    if(root->left == NULL){
        return minDepth(root->left)+1;
    }
    // only left subtree exists
    if(root->right == NULL){
        return minDepth(root->left)+1;
    }
    // both subtree exist
    return min(minDepth(root->left),minDepth(root->right))+1;
}
int main(){
     cout<<"Enter the tree: ";
     Node* root = buildTree();
     cout<<"Minimum Depth = "<<minDepth(root);
    return 0;
}