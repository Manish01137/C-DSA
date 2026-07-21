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
}
vector<vector<int>> verticalTraversal(TreeNode* root){
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<TreeNode*,pair<int,int>>> q;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto temp = q.fron();
        q.pop();
        TreeNode* node = temp.first;
        int hd = temp.second.first;
        int level = temp.second.second;

        nodes[hd][level].insert(node->val);

        if(node->left){
            q.push({node->right,{hd+1,level+1}});
        }
    }
    vector<vector<int>> ans;
    for(auto p: nodes){
        vector<int> column;
        for(auto q:p.second){
            for(auto value:q.second){
                column.push_back(valu);
            }
        }
        ans.push_back(column);
    }
    return ans;
}
int main(){

    return 0;
}