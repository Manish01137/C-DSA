#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* buildTree() {

    int data;
    cin >> data;

    if(data == -1)
        return NULL;

    Node* root = new Node(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

int sumOfNodes(Node* root){

    // Base Case
    if(root == NULL)
        return 0;

    int leftSum = sumOfNodes(root->left);

    int rightSum = sumOfNodes(root->right);

    return leftSum + rightSum + root->data;
}

int main(){

    cout << "Enter Tree : ";

    Node* root = buildTree();

    cout << "Sum = " << sumOfNodes(root);

    return 0;
}