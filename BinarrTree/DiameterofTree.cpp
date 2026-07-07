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
pair<int,int> diameterFast(Node* root){
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->left);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second+1;
  
    pair<int,int> ans;
    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second,right.second)+1;
   
    
    return ans;
}
int diameter(Node* root){
     
    return diameterFast(root).first;
}
int main(){
    Node* root = buildTree();
    cout<<diameter(root);
    return 0;
}