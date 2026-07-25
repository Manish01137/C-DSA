#include<iostream>
using namespace std;
class Node(){
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
class Solution {
public:

    TreeNode* solve(
        vector<int>& preorder,
        int& index,
        int inorderStart,
        int inorderEnd,
        unordered_map<int,int>& mp){

        if(inorderStart > inorderEnd)
            return NULL;

        TreeNode* root = new TreeNode(preorder[index]);

        index++;

        int position = mp[root->val];

        root->left = solve(
            preorder,
            index,
            inorderStart,
            position-1,
            mp
        );

        root->right = solve(
            preorder,
            index,
            position+1,
            inorderEnd,
            mp
        );

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder) {

        unordered_map<int,int> mp;

        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;

        int index=0;

        return solve(
            preorder,
            index,
            0,
            inorder.size()-1,
            mp
        );
    }
};
int main(){
    
    return 0;
}