#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in left "<<endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

   
    while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        
    if(temp==NULL){ // purana level complete ho chuka hai
         cout<<endl;
         if(!q.empty()){ // queue still has some child nodes
            q.push(NULL);
         }
    }
      else{
           if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
      }
       
    }
}
void inorder(node* root){
    // base case 
    if(root == NULL){
        return;
    }
 
        cout<<root->data<<" ";
        inorder(root->right);
    
}
void preorder(node* root){
    // base case
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    // base case
    if(root == NULL){
        preorder(root->left);
        preorder(root->right);
        cout<<root->data<<" ";
    }
}
int main(){
    node* root = NULL;

    // creating a Tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    levelOrderTraversal(root);
    cout<<"Inorder Travels is: ";
    inorder(root);
    return 0;
}