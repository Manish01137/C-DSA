#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printReverse(Node* tail){
    Node* temp = tail;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtHead(Node* &head, Node* &tail, int d){

    Node* temp = new Node(d);

    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &head, Node* &tail, int d){

    Node* temp = new Node(d);

    if(tail == NULL){
        head = temp;
        tail = temp;
        return;
    }

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);

    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);

    cout << "Forward Traversal: ";
    print(head);

    cout << "Reverse Traversal: ";
    printReverse(tail);

    return 0;
}