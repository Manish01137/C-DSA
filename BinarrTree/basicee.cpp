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
    cout<<"Enter the data ";
    cin>>data;
    // if there is no node , return NULL
    if(data==-1){
        return NULL;
    }
    // Create the current node
    Node* root = new Node(data);

    // Build the left subtree
    cout<<"Enter data for left child of "<<data<<endl;
    root->left = buildTree();

    // Build the right subtree
    cout<<"Enter data for right child of "<<data<<endl;
    root->right = buildTree();
    
    // return the root of this subtree
    return root;
    
}
int main(){
    Node* root = new Node(10);
    root = buildTree();

    return 0;
}