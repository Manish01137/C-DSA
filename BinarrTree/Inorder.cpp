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
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root = buildTree();
    cout<<"Inorder Traversal: ";
    inorder(root);
    return 0;
}