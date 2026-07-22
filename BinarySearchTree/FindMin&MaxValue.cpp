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
void takeInput(Node* root){
   int data;
   cin>>data;
   while(data!=-1){
      root = insertIntoBST(root,data);
      cin>>data;
   }
}
// inorder Traversal
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
// insert into BST
Node* insertIntoBST(Node* root,int data){
    // base case
    if(root==NULL){
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
Node* minValue(Node* root){
    if(root==NULL){
        return NULL;
    }
    while(root->left!=NULL){
        root = root->left;
}
    return root;
}
Node* maxValue(Node* root){
    if(root==NULL){
        return NULL;
    }
    while(root->right!=NULL){
        root = root->right;
    }
    return root;
}
int main(){
    Node* root = NULL;
    takeInput(root);
    Node* ans = minValue(root);

    if(ans!=NULL){
        cout<<"Minimum value = "<<ans->data;
    }
    else{
        cout<<"Tree Is empty";
    }
    return 0;
}