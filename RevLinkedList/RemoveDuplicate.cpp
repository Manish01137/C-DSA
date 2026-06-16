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
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* uniqueSorted(Node* head){
    // empty list
    if(head == NULL)
    return NULL;
    // non empty list
    while(curr!=NULL){
        if(curr->next!=NULL &&  curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr->next;
            delete(nodeToDelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(30);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* head = node1;
    print(head);
    return 0;
}