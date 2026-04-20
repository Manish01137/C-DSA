#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

// Traversing
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Length
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

// Insert at head
void insertAtHead(Node* &head, Node* &tail, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }

    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// Insert at tail
void insertAtTail(Node* &tail, Node* &head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }

    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// Insert at position
void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    // Insert at head
    if(position == 1){
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position - 1 && temp->next != NULL){
        temp = temp->next;
        cnt++;
    }

    // Insert at last
    if(temp->next == NULL){
        insertAtTail(tail, head, d);
        return;
    }

    // Insert in middle
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 123);
    insertAtHead(head, tail, 11);
    insertAtTail(tail, head, 25);

    cout << "Initial List: ";
    print(head);

    cout << "Length: " << getLength(head) << endl;

    insertAtPosition(tail, head, 2, 100);

    cout << "After inserting 100 at position 2: ";
    print(head);

    return 0;
}