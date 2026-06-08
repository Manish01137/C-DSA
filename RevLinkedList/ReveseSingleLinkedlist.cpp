#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverseLinkedList(Node* head) {

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL) {

        forward = curr->next;  // store next node

        curr->next = prev;     // reverse link

        prev = curr;           // move prev

        curr = forward;        // move curr
    }

    return prev;
}

int main() {

    Node* n1 = new Node(10);
    Node* n2 = new Node(20);
    Node* n3 = new Node(30);
    Node* n4 = new Node(40);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    Node* head = n1;

    cout << "Original List: ";
    print(head);

    head = reverseLinkedList(head);

    cout << "Reversed List: ";
    print(head);

    return 0;
}