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
int solve(BinaryTreeNode<int>* root,int& i,int k){
    // base case
    if(root == NULL){
        return -1;
    }
    int left = solve(root->left,i,k);
    if(left!=-1){
        return left;
    }
    // N
    i++;
    if(i==k){
        return root->data;
    }
    return solve(root->right,i,k);
}
int kthSmallest(BinaryTreeNode<int>* root,int i,int k){
    int ans = solve(root,i,k);
    return ans;
}
int main(){
    return 0;
}