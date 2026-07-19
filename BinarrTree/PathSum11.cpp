#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
Node* buildTree(){
    int val;
    cin>>val;
    Node* root = new Node(val);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
void solve(Node* root,int targetSum,vector<int>& path,vector<vector<int>>& ans){
    if(root==NULL){
        return;
    }
    path.push_back(root->val);
    targetSum -= root->val;
    if(root->left==NULL && root->right==NULL){
        if(targetSum==0){
            ans.push_back(path);
        }
        path.pop_back();
        return;
    }
    solve(root->left,targetSum,path,ans);
    solve(root->right,targetSum,path,ans);
    path.pop_back();
}
vector<vector<int>> pathSum(Node* root,int targetSum){
    vector<vector<int>> ans;
    vector<int> path;
    solve(root,targetSum,path,ans);
    return ans;
}
// print answer
void print(vector<vector<int>>& ans){
    if(ans.empty()){
        cout<<"No Path Found";
        return;
    }
    for(auto path: ans){
        for(int x: path){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter Tree: "<<endl;
    Node* root = buildTree();

    int target;
    cout<<"Enter target sum: ";
    cin>>target;
    vector<vector<int>> ans = pathSum(root,target);
    cout<<"\nPaths are:\n";
    print(ans);
    return 0;
}