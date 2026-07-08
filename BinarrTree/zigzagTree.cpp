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
    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
   
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
void zigZagTraversal(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;
    while(!q.empty()){
        int size = q.size();
        vector<int> ans(size);
        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();

            int index;
            if(leftToRight){
                index = i;
            }
            else{
                index = size-i-1;
            }
            ans[index] = temp->data;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        for(int i =0;i<size;i++){
            cout<<ans[i]<<" ";
            cout<<endl;
            leftToRight =!LeftToRight;
        }
    }
}
int main(){
    Node* root = buildTree();
    zigZagTraversal(root);
    return 0;
}