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

    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
void levelOrderLineByLine(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();

            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            cout<<endl;
        }
    }
}
int main(){
    Node* root = buildTree();
    cout<<"Level order line by line: ";
    levelOrderLineByLine(root);
    return 0;
}