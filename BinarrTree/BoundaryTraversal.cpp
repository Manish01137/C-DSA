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

    return ans;
}
void traverseleft(Node* root, vector<int> &ans){
      // base case
      if((root==NULL) || (root->left==NULL && root->right==NULL)){
           return;
      }
      ans.push_back(root->data);
      if(root->left)
        traverseleft(root->left,ans);
      else
        traverseleft(root->right,ans);
     
}
void traverseLeaf(Node* root, vector<int> &ans){
    // base case
    if(root== NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);
}
void traverseRight(Node* root,vector<int> &ans){
    // base case
    if((root==NULL) || (root->left==NULL || root->right==NULL)){
        return;
    }
    if(root->right){
        traverseRight(root->right);
    }
    else{
        traverseleft(root->left);
    }

    // wapas aagya
    ans.push(root->data);
  
}
vector<int> boundary(Node* root){
     vector<int> ans;
     if(root === NULL){
        return ans;
     }
     ans.push_back(root->left);

     // left part print/store
     traverseleft(root->left,ans);

     // travesleaf node

     // left subtree
     traverseLeaf(root->left,ans);
     // right subtree
     traverseLeaf(root->right,ans);

     // traverse rigth
     traveseRight(root->right,ans);
     return ans;

}
int main(){
    Node* root = buildTree();

    vector<int> ans = boundary(root);

    cout << "Boundary: ";

    for (int i : ans) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}