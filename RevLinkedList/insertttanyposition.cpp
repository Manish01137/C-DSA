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
void InsertAtHead(Node* head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node* tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtPosition(Node* &tail, Node* &head,int position, int d){
     if(position == 1){
        InsertAtHead(head,d);
        return;
     }
     Node* temp = head;
     int cnt = 1;

     while(cnt<position-1){
        temp = temp->next;
        cnt++;
     }
     if(temp->next == NULL){
        InsertAtTail(tail,d);
        return;
     }
     Node* nodeToInsert = new Node(d);
     nodeToInsert->next = temp->next;
     temp->next = nodeToInsert;
}
void print(Node* &head){
     Node* temp = head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
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
    InsertAtHead(head,5);
    print(head);
    cout<<endl;
    InsertAtTail(tail,50);
    print(head);

    return 0;
}