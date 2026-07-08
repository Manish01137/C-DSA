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
    cout<<"Enter data: ";
    cin>>data;
    // base case
    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
    cout<<"Enter the left child of: "<<data<<endl;
    root->left = buildTree();
    cout<<"Enter the right child of: "<<data<<endl;
    root->right = buildTree();

    return root;
}
void levelOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }
    // create queue
    queue<Node*> q;
    // put root inside queue
    q.push(root); 
    while(!q.empty()){
        // take the first node
        Node* temp = q.front();
        // Remove it from queue
        q.pop();
        // print the current node
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}
int main(){
    Node* root = NULL;
    cout<<"Build Binary Tree"<<endl;

    root = buildTree();
    cout<<"Level Order Traversal: ";
    levelOrderTraversal(root);
    return 0;
}