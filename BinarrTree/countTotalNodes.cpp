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
int countNode(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftcount = countNode(root->left);
    int rightcount = countNode(root->right);

    return leftcount + rightcount +1;
}
int main(){
    cout<<"Enter Tree: ";
    Node* root = buildTree();
    cout<<"Total Nodes = "<<countNode(root);
    return 0;
}