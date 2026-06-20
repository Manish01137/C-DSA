#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
// print forward
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// print backward
void printReverse(Node* tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    if(head!=NULL){
        head->prev = temp;
    }
    head = temp;
}
int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->prev = first;
    
    second->next = third;
    third->prev = second;

    return 0;
}