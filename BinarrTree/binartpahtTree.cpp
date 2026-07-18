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
void solve(TreeNode* root,string path,vector<string>& ans){
    if(root==NULL){
        return;
    }
    if(path==""){
        path=to_string(root->val);
    }
    else{
        path += "->" + to_string(root->val);
    }
    if(root->left == NULL && root->right== NULL){
        ans.push_back(path);
        return;
    }
    solve(root->left,path,ans);
    solve(root->right,path,ans);
}
vector<string> binaryTreePaths(TreeNode* root){
    vector<string> ans;
    solve(root,"",ans);
    return ans;
};
int main(){

    return 0;
}