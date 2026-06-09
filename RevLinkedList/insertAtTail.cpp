#include<iostream>
using namespace std;
class Node{
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
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL; 
        }
        cout<<"memory is free node with data "<<value<<endl;
    }
};
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void deleteNode(int position, Node* &head){
    if(position==1){
        Node* temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else{
        // deleteing any middle node or last node
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
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);

   node1->next = node2;
   node2->next = node3;

 
  
   Node* head = node1;
   Node* tail = node3;
   print(head);
   cout<<endl;
   InsertAtTail(tail,40);
   print(head);
   
   cout<<endl;
   deleteNode(3,head);
   print(head);
    return 0;
}