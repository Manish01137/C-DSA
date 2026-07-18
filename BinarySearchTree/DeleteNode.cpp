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
Node* deleteFromBST(Node* root, int val){
    // base case
    if(root==NULL){
        return root;
    }
    if(root->data == val){
        // 0 child
        if(root->left == NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child
        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // right child
        if(root->left == NULL && root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini = minval(root->right)->data;
            root->data = mini;
            root->data = deleteFromBST(root->right,miini);
            return root;
        }
    }
    else if(root->data>val){
       root->left = deleteFromBST(root->left,val);
       return root;
    }
    else{
        // right part
        root->right = deleteFromBST(root->right,val);
        return root;
    }
}
int main(){
    
    return 0;
}