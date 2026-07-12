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
       rigt = NULL;
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
pair<int,int> solve(Node* root){
    // base case
    if(root==NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }
    pair<int,int> left = solve(root->left);
    pair<int,int> right = solve(root->right);

    pair<int,int> res;
    res.first = root->data + lef.second + right.second;
    res.second = max(left.first,left.second) + max(right.first,right,second);

    return res;
}
int getMaxSum(Node* root){
    pair<int,int> ans = solve(root);
    return max(ans.first,ans.second);
}
int main(){

    return 0;
}