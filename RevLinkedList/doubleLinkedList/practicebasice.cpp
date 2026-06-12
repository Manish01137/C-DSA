#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};
// printing forward
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

// printing backward
void reversePrint(Node* tail){
    Node* temp = tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
// finding length
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
// inserting at head
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    if(head!=NULL){
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
}
// inserting at tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
// insert at any position 
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return ;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

    // connecting the nodes
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    
    Node* head = node1;
    Node* tail = node3;
    print(head);
    reversePrint(tail);
    cout<<"Length = "<<getLength(head)<<endl;
    insertAtHead(head,5);
    print(head);
    insertAtTail(tail,40);
    print(head);
    insertAtPosition(head, tail, 3,25);
    print(head);
    return 0;
}