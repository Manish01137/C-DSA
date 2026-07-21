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
void inorder(BinaryTreeNode<int>* root,vecctor<int> &in){
    if(root==NULL){
        return;
    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
bool towSumInBST(BinaryTreeNode<int>* root,int target){
    vector<int> inorderVal;
    inorder(root,inorderVal);
    int i =0, j= inorderVal.size()-1;
    while(i<j){
        int sum = inorderVal[i] + inorderVal[j];
        if(sum==target){
            return true;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}
int main(){
    
    return 0;
}