#include<iostream>
#include<algorithm>
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
int height(struct Node* node){
    if(node==NULL){
        return 0;
    }
    int left = height(node->left);
    int right = height(node->right);

    int ans = max(left,right)+1;
    return ans;
}
int main(){
    Node* root = buildTree();
    cout<<height(root);
    return 0;
}