#include<iostream>
#include<vector>
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
    cin >> data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

bool isLeaf(Node* root){
    return (root->left == NULL && root->right == NULL);
}

void addLeftBoundary(Node* root, vector<int>& ans){
    Node* curr = root->left;

    while(curr){
        if(!isLeaf(curr)){
            ans.push_back(curr->data);
        }

        if(curr->left){
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
    }
}

void addLeaf(Node* root, vector<int>& ans){
    if(root == NULL){
        return;
    }

    if(isLeaf(root)){
        ans.push_back(root->data);
        return;
    }

    addLeaf(root->left, ans);
    addLeaf(root->right, ans);
}

void addRightBoundary(Node* root, vector<int>& ans){
    Node* curr = root->right;
    vector<int> temp;

    while(curr){
        if(!isLeaf(curr)){
            temp.push_back(curr->data);
        }

        if(curr->right){
            curr = curr->right;
        }
        else{
            curr = curr->left;
        }
    }

    for(int i = temp.size() - 1; i >= 0; i--){
        ans.push_back(temp[i]);
    }
}

vector<int> boundary(Node* root){
    vector<int> ans;

    if(root == NULL){
        return ans;
    }

    if(!isLeaf(root)){
        ans.push_back(root->data);
    }

    addLeftBoundary(root, ans);
    addLeaf(root, ans);
    addRightBoundary(root, ans);

    return ans;
}

int main(){

    // Input in preorder
    // Example:
    // 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1

    Node* root = buildTree();

    vector<int> ans = boundary(root);

    cout << "Boundary Traversal: ";

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    cout << endl;

    return 0;
}