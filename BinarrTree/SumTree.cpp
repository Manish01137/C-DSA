#include<iostream>
using namespace std;
class Node{
   int data;
   Node* left;
   Node* right;
   Node(int data){
      this->data = data;
      left = NULL;
      right = NULL
   }
};
pair<bool,int> isSumTreefast(Node* root){
    if(root == NULL){
        pair<bool,int>p = make_pair(true,0);
        return p;
    }
    if(root->left == NULL && root->right == NULL){
        pair<bool,int>p =make_pair(true,root->data);
        return p;
    }
    pair<bool,int> leftans = isSumTreefast(root->left);
    pair<bool,int> rightAns = isSumTreefast(root->left);

    bool left = leftAns.first;
    bool right = rightAns.first;

    bool contn = root->data == leftAns.second + rightAns.second;

    pair<bool,int>ans;
    if(left&& right && condn){
        ans.first = true;
        ans.second=root->data+left.second;
    }
    else{
        ans.first = false;

    }
    return ans;
}

int main(){

    return 0;
}
