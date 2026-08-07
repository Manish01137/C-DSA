#include<iostream>
#include<climits>
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
Node* insertIntoBST(Node* root,int data){
    if(root==NULL){
        return new Node(data);
    }
    if(data<root->data){
        root->left = insertIntoBST(root->left,data);
    }
    else{
        root->right = insertIntoBST(root->right,data);
    }
    return root;
}
// take input
void takeInput(Node* &root){
    int data;
    cout<<"Enter values (-1 to stop): ";
    cin>>data;
    while(data!=-1){
        root = insertIntoBST(root,data);
        cin>>data;
    }
}
// validate bst
bool solve(Node* root,long long minVal,long long maxVal){
    if(root==NULL){
        return true;
    }
    if(root->data<=minVal || root->data>=maxVal){
        return false;
    }
    return solve(root->left,minVal,root->data) && solve(root->right,root->data,maxVal);
}
bool isValidBST(Node* root){
    return solve(root,LLONG_MIN, LLONG_MAX);
}
// inorder traversal
void inorder(Node* root){
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root = NULL;
    takeInput(root);
    cout<<"\nInorder Traversal";
    inorder(root);

    cout<<endl;
    if(isValidBST(root)){
        cout<<"valid BST";
    }
    else{
        cout<<"Not a Valid BST";
    }
    return 0;
}