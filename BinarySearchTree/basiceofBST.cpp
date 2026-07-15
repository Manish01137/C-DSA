#include<iostream>
#include<queue>
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
Node* insertInToBST(Node* root,int d){
    // base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }
    if(d>root->data){
        // right part me insert karna hai
        root->right = insertInToBST(root->right,d);
    }
    else{
        // left part me insert karna hai
        root->left = insertInToBST(root->left,d);
    }
    return root;
}
Node* TakeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
       root = insertInToBST(root,data);
        cin>>data;
    }   
}
int main(){
    Node* root = NULL;
    cout<<"Enter data to create BST"<<endl;
    TakeInput(root);
    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);
    return 0;
}