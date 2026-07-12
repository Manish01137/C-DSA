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
    cin>> data;
    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
Node* solve(Node* root,int &k,int node){
    // base case
    if(root == NULL){
        return NULL;
    }
    if(root->data == node){
        return root;
    }
    Node* leftAns = solve(root->left,k,node);
    Node* rightAns = solve(root->right,k,node);

    // wapse jauga
    if(leftAns!=NULL && rightAns == NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        else{
            return leftAns;
        }
    }
    if(leftAns == NULL && rightAns != Ans){
        k--;
        if(k<=0){
            // answer lock
            k = INT_MAX;
            return root;
        }
        return rightAns;
    }
    return NULL;
}
int kthAncestor(Node* root,int k,int node){
     Node* ans = solve(root,k,node);
     if(ans == NULL){
        return -1;
     }
     else{
        return ans->data;
     }
}
int main(){
    
    return 0;
}