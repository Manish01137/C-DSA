#include<iostream>
#include<algorithm>
#include<climits>
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

void solve(Node* root, int sum, int &maxSum, int len, int &maxlen){

    if(root == NULL){

        if(len > maxlen){
            maxlen = len;
            maxSum = sum;
        }
        else if(len == maxlen){
            maxSum = max(sum, maxSum);
        }

        return;     // <-- semicolon
    }

    sum = sum + root->data;

    solve(root->left, sum, maxSum, len + 1, maxlen);
    solve(root->right, sum, maxSum, len + 1, maxlen);
}

int sumOfleafToroot(Node* root){

    int len = 0;
    int maxlen = 0;
    int sum = 0;
    int maxSum = INT_MIN;

    solve(root, sum, maxSum, len, maxlen);

    return maxSum;
}

int main(){

    Node* root = buildTree();

    cout << "Sum of longest bloodline of Tree: ";
    cout << sumOfleafToroot(root);

    return 0;
}