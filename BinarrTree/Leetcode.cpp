class Solution {
public:

    TreeNode* solve(
        vector<int>& postorder,
        int& index,
        int inorderStart,
        int inorderEnd,
        unordered_map<int,int>& mp){

        if(inorderStart > inorderEnd)
            return NULL;

        TreeNode* root =
            new TreeNode(postorder[index]);

        index--;

        int position = mp[root->val];

        root->right = solve(
            postorder,
            index,
            position+1111,
            inorderEnd,
            mp
        );

        root->left = solve(
            postorder,
            index,
            inorderStart,
            position-1,
            mp
        );

        return root;
    }

    TreeNode* buildTree(
        vector<int>& inorder,
        vector<int>& postorder) {

        unordered_map<int,int> mp;

        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;

        int index=postorder.size()-1;

        return solve(
            postorder,
            index,
            0,
            inorder.size()-1,
            mp
        );
    }
};