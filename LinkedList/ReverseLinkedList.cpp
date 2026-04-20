#include<iostream>
using namespace std;
// Define Node Structure

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
Node* reverseLinkedList(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

// Helper function to print list

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    // creating a Linked List
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    cout<<"Original List: ";
    printList(head);

    head = reverseLinkedList(head);
    cout<<"Reversed List: ";
    printList(head);
    return 0;
}