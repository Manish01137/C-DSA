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
bool isBST(BinartyTreeNode<int>* root,int min,int max){
    // base case
    if(root==NULL){
        return true;
    }
    if(root->data>=min && root->data<=max){
        bool left = isBST(root->left,min,root->data);
        bool right = isBST(root->right,root->data,max);
        return left && right;
    }
    else{
        return false;
    }
}
int main(){

    return 0;
}