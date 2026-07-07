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
    cin >> data;

    if(data == -1){
        return NULL;
    }

    Node* root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

pair<bool,int> isBalanceFast(Node* root){

    if(root == NULL){
        return make_pair(true,0);
    }

    pair<bool,int> left = isBalanceFast(root->left);
    pair<bool,int> right = isBalanceFast(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <= 1;

    pair<bool,int> ans;

    ans.second = max(left.second, right.second) + 1;

    if(leftAns && rightAns && diff){
        ans.first = true;
    }
    else{
        ans.first = false;
    }

    return ans;
}

int main(){

    Node* root = buildTree();

    if(isBalanceFast(root).first)
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}