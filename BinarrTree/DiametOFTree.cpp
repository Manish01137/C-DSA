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
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
int diameterOfBinaryTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int opt1 = diameterOfBinaryTree(root->left);
    int opt2 = diameterOfBinaryTree(root->right);
    int opt3 = height(root->left) + height(root->right);

    return max(opt3,max(opt1,opt2));
}
int main(){
    Node* root = buildTree();
    cout<<diameterOfBinaryTree(root);
    return 0;
}