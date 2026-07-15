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
    if(data==-1){
        return NULL;
    }
    Node* root = new Node(10);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
bool isSameTree(TreeNode* p, TreeNode* q){
    if(p==NULL && q==NULL){
        return true;
    }
    if(p==NULL || q==NULL){
        return false;
    }
    if(p->val!=q->val){
        return false;
    }
    bool left = isSameTree(p->left,q->left);
    bool right = isSameTree(p->right,q->right);

    return left && right;
}
int main(){
    
    return 0;
}