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
void InsertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void InsertAtPostion(Node* &head, Node* &tail,int position, int data){
    if(position==1){
        InsertAtHead(head,data);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        InsertAtTail(tail,data);
        return;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
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
int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* head = node1;
    Node* tail = node4;
    print(head);
    
    cout<<endl;
    InsertAtHead(head,5);
    print(head);
    cout<<endl;

    InsertAtTail(tail,50);
    print(head);
    cout<<endl;
    InsertAtPostion(head, tail, 3, 3);
    print(head);
    cout<<endl;
    InsertAtPostion(head,tail,3,25);
    print(head);
    cout<<endl;
    InsertAtPostion(head, tail, 1, 2);
    print(head);
    cout<<endl;
    InsertAtPostion(head, tail, 4, 40);
    print(head);
    return 0;
}