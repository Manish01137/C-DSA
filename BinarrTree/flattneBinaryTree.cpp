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
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
void flatten(Node* root){
    Node* curr = root;
    while(curr!=NULL){
        if(curr->left){
            Node* pred = curr->left;
            while(pred->right)
              pred = pred->right;
            pred->right = curr->right;
            curr->right = curr->left;
        }
        curr = curr->right;
    }
    curr = curr->right;

    //. left part null
    curr = root;
    while(curr!=NULL){
        curr->left = NULL;
        curr = curr->right;
    }
}
int main(){

    return 0;
}