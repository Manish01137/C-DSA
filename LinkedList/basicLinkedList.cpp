#include<iostream>
using namespace std;
class Node {
     public:
     int data;
     Node* next;
    // constructor
     Node(int data){
        this->data = data;
        this->next = NULL;
     }
    // destructor
    ~Node(){
        int value = this-> data;
        // memory free 
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data"<<endl;
    }
};

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAtTail(Node* &tail,int d){
    // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;

}

void print(Node* &head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// insert at any position
void InsertAtPosition(Node* & head,int position,int d){
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// deletion of node
void deleteNode(int position,Node* &head){

    // deleting first or start node
    if(position==1){
        Node* temp = head;
        head = head->next;

        // memory free start node
        temp -> next = NULL;

        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<=position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    
    // created a new node
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    // head pointed to node1

    Node* head = node1;
    Node* tail = node1;
    print(head);

    InsertAtHead(head,12);

    print(head);

    InsertAtTail(tail,15);
    print(head);

    InsertAtPosition(head,3,22);
    print(head);

    deleteNode(1,head);
    print(head);
    return 0;
}