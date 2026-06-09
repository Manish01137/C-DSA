#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void Print(Node* &head){
     Node* temp = head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
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
    Node* tail = node4;

    Print(head);
    cout<<endl;
    InsertAtHead(head,5);
    Print(head);
    cout<<endl;
    InsertAtTail(tail,50);
    Print(head);
    return 0;
}