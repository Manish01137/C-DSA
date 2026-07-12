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
Node* Lca(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data == n2){
        return root;
    }
    Node* leftAns = Lca(root->left,n1,n2);
    Node* rightAns = Lca(root->right,n1,n2);

    if(leftAns!=NULL && rightAns!=NULL){
        return root;
    }
    else if(leftAns!=NULL && rightAns==NULL){
        return leftAns;
    }
    else if(leftAns==NULL && rightAns!=NULL){
        return rightAns;
    }
    else{
        return NULL;
    }
}
 int main(){

    Node* root = buildTree();

    int n1, n2;
    cout << "Enter two nodes: ";
    cin >> n1 >> n2;

    Node* ans = Lca(root, n1, n2);

    if(ans != NULL){
        cout << "Lowest Common Ancestor: " << ans->data;
    }
    else{
        cout << "Nodes not found";
    }

    return 0;
}