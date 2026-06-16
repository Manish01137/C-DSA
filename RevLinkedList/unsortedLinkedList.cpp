#include<iostream>
using namespace std;
class Node{
   int data;
   Node* next;
   Node* prev;
   Node(int data){
      this->data = data;
      this->next = NULL;
      this->prev = NULL;
   }
};
Node* removeDuplicate(Node* head){
    if(head == NULL){
        return NULL;
    }
     unordered_set<int> seen;
     Node* curr = head;
     Node* prev = NULL;
     while(curr!=NULL){
        if(seen.find(curr->data)!=seen.end()){
            prev->next = curr->next;
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
        else{
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
     }
     return head;
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
    Node* node3 = new Node(5);
    Node* node4 = new Node(20);

    Node* head = node1;
    Node* tail = node4;

   print(head);
   head = removeDuplicate(head);
   print(head);
    return 0;
}