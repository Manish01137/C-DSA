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
// take input
void takeInput(Node* root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}
// inoder traversal
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
// insert in BST 
void insertIntoBST(Node* root,int data){
    if(data==NULL){
        root = new Node(data);
        return root;
    }
    if(data<root->data){
        root->left = insertIntoBST(root->left,data);
    }
    else{
        root->right = insertIntoBST(root->right,data);
    }
    return root;
}
// Node Search in BST
Node* searchInBST(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data ==key){
        return root;
    }
    if(key<root->data){
        return searchInBST(root->left,key);
    }
    return searchInBST(root->right,key);
}
int main(){
   Node* root = NULL;
   takeInput(root);
   int key;
   cout<<"Enter the value to search: ";
   cin>>key;
   Node* ans = searchInBST(root,key);
   if(ans == NULL){
    cout<<"Element Not Found";
   }
   else{
    cout<<"Element Found: "<<ans->data;
   }
    return 0;
}