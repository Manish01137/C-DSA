#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

// Build Tree (Preorder Input)
Node* buildTree(){
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Bottom View Function
vector<int> bottomView(Node* root){
    vector<int> ans;

    if(root == NULL){
        return ans;
    }

    map<int, int> mp;               // HD -> Node Value
    queue<pair<Node*, int>> q;      // Node, Horizontal Distance

    q.push({root, 0});

    while(!q.empty()){

        auto temp = q.front();
        q.pop();

        Node* node = temp.first;
        int hd = temp.second;

        // Overwrite value because bottom-most node is needed
        mp[hd] = node->data;

        if(node->left){
            q.push({node->left, hd - 1});
        }

        if(node->right){
            q.push({node->right, hd + 1});
        }
    }

    for(auto x : mp){
        ans.push_back(x.second);
    }

    return ans;
}

int main(){

    cout << "Enter tree in preorder (-1 for NULL):" << endl;

    Node* root = buildTree();

    vector<int> ans = bottomView(root);

    cout << "Bottom View: ";

    for(int x : ans){
        cout << x << " ";
    }

    cout << endl;

    return 0;
}