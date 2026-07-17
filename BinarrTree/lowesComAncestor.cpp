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
Node* LowestCommonAncestor(Node* root,Node* p,Node* q){
    if(root==NULL){
        return NULL;
    }
    if(root==p || root==q){
        return root;
    }
    Node* left = LowestCommonAncestor(root->left,p,q);
    Node* right = LowestCommonAncestor(root->right,p,q);

    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left==NULL){
        return right;
    }
    else{
        return left;
    }
}
int main(){

    return 0;
}