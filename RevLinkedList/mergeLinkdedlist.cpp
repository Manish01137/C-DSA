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
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* mergeLists(Node* first, Node* second) {

    Node* dummy = new Node(-1);
    Node* tail = dummy;

    while(first != NULL && second != NULL) {

        if(first->data <= second->data) {
            tail->next = first;
            first = first->next;
        }
        else {
            tail->next = second;
            second = second->next;
        }

        tail = tail->next;
    }

    // Remaining nodes
    if(first != NULL)
        tail->next = first;

    if(second != NULL)
        tail->next = second;

    return dummy->next;
}

int main() {

    // List 1
    Node* a1 = new Node(1);
    Node* a2 = new Node(3);
    Node* a3 = new Node(5);
    Node* a4 = new Node(7);

    a1->next = a2;
    a2->next = a3;
    a3->next = a4;

    // List 2
    Node* b1 = new Node(2);
    Node* b2 = new Node(4);
    Node* b3 = new Node(6);
    Node* b4 = new Node(8);

    b1->next = b2;
    b2->next = b3;
    b3->next = b4;

    Node* ans = mergeLists(a1, b1);

    print(ans);

    return 0;
}