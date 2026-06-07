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
void InsertAtHead(Node* head, int d){
    Node* temp = new Node(d);
    temp = next->head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    Node* Node2 = new Node(20);
    Node* Node3 = new Node(30);

    return 0;
}