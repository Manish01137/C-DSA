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
    cin>> data;
    if(data==-1){
       return NULL;
    }
    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    // step1: visit the current node
    cout<<root->data<<" ";
    // step2: Traverse left subtree
    preorder(root->left);
    // step3: Traverse right subtree
    preorder(root->right);
}
int main(){
     Node* root = buildTree();
     cout<<"Preorder Traversal: ";
     preorder(root);
    return 0;
}