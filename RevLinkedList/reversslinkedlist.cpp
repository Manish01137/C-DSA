#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;
   
   Node(int data){
    this->data = data;
    this->next = next;
   }
};
void reverse(Node* &head,Node* curr, Node* prev){
    if(curr==NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev
}
Node* ReverseLinkedList(Node* head){
      if(head == NULL || head->next == NULL){
        return head;
      }
      Node* prev = NULL;
      Node* curr = head;
      Node* forward = NULL;

      while(curr!=NULL){
          forward = curr->next;
          curr->next = prev;
          prev = curr;
          curr = forward;
      }
      return prev;
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
    node4->next = node4;

    Node* head = node1;
    return 0;
}