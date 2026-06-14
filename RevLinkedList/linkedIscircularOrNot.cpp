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
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
bool isCircularList(Node* tail){
    if(head == NULL){
        return false;
    }
    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp = temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
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

    if(isCircularList(tail)){
        cout<<"LinkedList is Circular in nature"<<endl;
    }
    else{
        cout<<"Linked list is not Circular "<<endl;
    }
    return 0;
}