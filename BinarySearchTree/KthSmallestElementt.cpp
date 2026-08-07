#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
// inserting into bst
Node* InsertIntoBST(Node* root,int data){
    if(root==NULL){
        return new Node(root);
    }
    if(data<root->data){
        root->left = InsertIntoBST(root->left,data);
    }
    else{
        root->right = InsertIntoBST(root->right,data);
    }
    return root;
}
// taking input
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = InsertIntoBST(root,data);
        cin>>data;
    }
}
void inorder(Node* root,int &k){
    if(root==NULL k==0){
        return;
    }
    inorder(root-left,k);
    if(k==0)
        return;
    k--;
    if(k==0){
        ans = root->val;
        return;
    }
    inorder(root->right,k);
   
}
int kthSmallest(Node* root,int k){
    inorder(root,k);
    return ans;
}
int main(){
    Node* root = NULL;
    takeInput(root);
    cout<<"\nInorder Traversal";
    inorder(root);

    cout<<endl;
    return 0;
}