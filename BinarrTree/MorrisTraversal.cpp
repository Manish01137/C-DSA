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

void morrisTraversal(Node* root){

    Node* curr = root;

    while(curr != NULL){

        // No left child
        if(curr->left == NULL){
            cout << curr->data << " ";
            curr = curr->right;
        }

        // Left child exists
        else{

            Node* predecessor = curr->left;

            // Find rightmost node of left subtree
            while(predecessor->right != NULL && predecessor->right != curr){
                predecessor = predecessor->right;
            }

            // Create thread
            if(predecessor->right == NULL){
                predecessor->right = curr;
                curr = curr->left;
            }

            // Thread already exists
            else{
                predecessor->right = NULL;
                cout << curr->data << " ";
                curr = curr->right;
            }
        }
    }
}

int main(){

    cout << "Enter tree (-1 for NULL):" << endl;

    Node* root = buildTree();

    cout << "Morris Inorder Traversal : ";

    morrisTraversal(root);

    cout << endl;

    return 0;
}