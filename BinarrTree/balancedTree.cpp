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
}
Node* buildTree(){
    int data;
    cin>>data;
    if(data == -1){
        return NULL;
    }
    Node* root = buildTree();
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
int height(Node* root){
    if(root==NULL){
        return root;
    }
    return max(height(root->left),height(root->right))+1;
}
bool isBalanced(Node* root){
    if(root == NULL){
        return 0;
    }
    bool leftBalanced = isBalanced(root->left);
    bool rightBalanced = isBalanced(root->right);

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    bool currentBalanced = abs(leftHeight-rightHeight)<=1;
    return leftBlanced && rightBalanced && currentBalanced;
}
int main(){
    Node* root = buildTree();

    
    return 0;
}