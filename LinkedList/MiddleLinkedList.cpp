#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
// get Length of Linked List

int getLength(Node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}
// Find Middle node
Node *findMiddle(Node *head){
   int len = getLength(head);
   int mid = len/2;

   Node* temp = head;
   int count = 0;
   while(count<mid){
    temp = temp->next;
    count++;
   }
   return temp;
}

//print 
void printList(Node* head){
    while(head){
        cout<<head->data<<" ->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    printList(head);

    Node* middle = findMiddle(head);
    cout<<"Middle Node: "<<middle->data<<endl;
    return 0;
}