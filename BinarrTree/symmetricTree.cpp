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
bool isMirror(TreeNode* left,TreeNode* right){
    if(left==NULL && right==NULL){
        return true;
    }
    if(left==NULL || right == NULL){
        return false;
    }
    if(left->val!=right->val){
        return false;
    }
    bool leftSide = isMirror(left->left,right->right);
    bool rightSide = isMirror(left->right,right->left);

    return leftSide && rightSide;
}
int main(){

    return 0;
}