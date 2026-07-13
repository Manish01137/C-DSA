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
int findPosition(int in,int element,int n){
    for(int i=0;i<n;i++){
        if(in[i]==element)
        return i;
    }
    
}
Node* solve(int in,int pre,int index,int inorderStart,int inorderEnd){
    // base case
    if(index>=n || inorderStart>inorderEnd){
        return NULL;
    }
    int element = pre[index];
    Node* root = new Node(element);
    int position = findPosition(in,element);

    // recursive cals 
    root->left = solve(in,pre,index,inorderStart,);
    root->rgiht = solve(in,pre,index,position+1);

    return root;

}
Node* buildTree(int in,int pre,int n){
    int preOrderIndex = 0;
    Node* ans = solve(in,pre,preOrderIndex,0,n-1);
    return ans;
}
int main(){

    return 0;
}