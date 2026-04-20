#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

// print linked list
void PrintList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

bool isCircularlist(Node* head){
    // empty list
    if(head == NULL){
        return true;
    }

    Node* temp = head->next;

    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Make it circular
    head->next->next->next->next->next = head;

    if(isCircularlist(head)){
        cout<<"Linked list is circular in nature"<<endl;
    }
    else{
        cout<<"Linked List is not Circular"<<endl;
    }

    return 0;
}