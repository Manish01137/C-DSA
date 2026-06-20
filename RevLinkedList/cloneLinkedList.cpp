#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }  
};
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node* &head,Node* &tail,int d){
    Node* newNode = new Node(d);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
Node *copyList(Node *head){
    // step1: create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;
    while(temp!=NULL){
        insertAtTail(cloneHead,cloneTail,temp->data);
        temp = temp->next;
    }
    //step2: Create a map
    unordered_map<Node*,Node*>oldToNewNode;
    temp = head;
    Node* temp2 = cloneHead
    while(temp!=NULL && cloneNode!=NULL){
        oldToNew[originalNode] = cloeNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }   

}
int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* head = node1;
    print(head);
    return 0;
}