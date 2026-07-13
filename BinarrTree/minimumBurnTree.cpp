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
    Node* root = buildTree();
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
// create mapping
// return target node
Node* createParentMapping(Node* root,int target,map<Node*,Node*> &nodeToParent){
     Node* res = NULL;

     queue<Node*> q;
     q.push(!q.empty()){
        Node* front = q.front();
        q.pop();
        if(front->data == target){
            res = front;
        }
        if(front->left){
            nodeToParent[front->left] = front;
            q.push(front->left);
        }
        if(front->right){
            nodeToParent[front->right] = front;
            q.push(front->right);
        }
     }
     return ans;
}
void burnTree(){
   
}
int minTime(Node* root,int target){
    // alog
    //step 1: create nodetoparent mapping
    // step 2: find target node
    // step 3: burn the tree in min time
    int ans = 0;
    map<Node*,Node*> nodeToParend;
    Node* targeNode = createParentMapping(root,target,nodeToParent);

    burnTree(targetNode,nodeToParent);
}
int main(){

    return 0;
}