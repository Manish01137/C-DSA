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
int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}
Node *finMiddle(Node* head){
    int len = getLength(head);
    int mid = len/2;

    Node* temp = head;
    int cnt = 0;
    while(cnt<mid){
        temp = temp->next;
        cnt++;
    }
    return temp;
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
    Node* node5 = new Node(50);
    Node* node6 = new Node(60);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    
    Node* head = node1;
    print(head);
    Node* middle = finMiddle(head);
    cout<<middle->data<<endl;
    return 0;
}