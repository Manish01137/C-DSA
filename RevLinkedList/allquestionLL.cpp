#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   Node* prev;
   Node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
   }
};
void insertAtHead(Node*& head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node*& head,int d){
    Node* temp = new Node(d);
    if(!head){
        head = temp;
        return;
    }
    Node* curr = head;
    while(curr->next!=NULL)
      curr = curr->next;
    curr->next = temp;
}
void insertAtPosition(Node*& head,int position, int d){
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
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;;
    temp->next = nodeToInsert;
}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void deleteNode(Node* &head, int position){
     if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
     }
     else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
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
    Node* node4 = new Node(40);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* head = node1;
    print(head);
    insertAtHead(head,5);
    print(head);
    insertAtTail(head,50);
    print(head);
    insertAtPosition(head,3,89);
    print(head);
    deleteNode(head,3);
    print(head);
    return 0;
}