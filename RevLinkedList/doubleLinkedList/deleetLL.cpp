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
      this->next = NULL;
   }
};
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void deleteAtHead(Node* &head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    head = head->next;

    if(head!=NULL){
        head->prev = NULL;
    }
    delete temp;
}
void deleteAtPosition(Node* &head,int position){
    
    if(position==1){
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count<position){
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        if(curr->next!=NULL){
            curr->next->prev = prev;
        }
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);

    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    
    Node* head = node1;
    
    print(head);
    deleteAtPosition(head,3);
    print(head);
    return 0;
}