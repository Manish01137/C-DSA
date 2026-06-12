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
// Node* findMiddle(Node* head){
//     int len = 0;
//     Node* temp = head;
//     while(temp!=NULL){
//         len++;
//         temp = temp->next;
//     }
//     int mid = len/2;
//     temp = head;
//     int cnt = 0;
//     while(cnt<mid){
//         temp = temp->next;
//         cnt++;
//     }
//     return temp;
// }
Node* findMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
    
    Node* middle = findMiddle(head);
    cout<<middle->data<<endl;
    return 0;
}