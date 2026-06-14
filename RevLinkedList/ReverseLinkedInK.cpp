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
Node* kReverse(Node* head,int k){
    // base call
    if(head==NULL){
        return NULL;
    }
    // step1: reverse first k nodes
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step 2:Recurssion deklega aage ka
    if(next!=NULL){
        head->next=kReverse(next,k);
    }
    // step3: return head of reversed list
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
    node3->next = node4;

    Node* head = node1;
    print(head);
    head = kReverse(head,2);
    print(head);
    return 0;
}