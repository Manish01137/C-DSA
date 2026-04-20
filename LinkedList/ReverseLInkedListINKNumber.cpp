#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
// print linked list

void printList(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
Node* kReverse(Node* head,int k){
    if(head==NULL){
        return NULL;
    }

    // step1: reverse first k Nodes;

    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0;

    while(curr!=NULL && count<k){
        next = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // step 2 Recuression deklage ka 
    if(next!=NULL){
        head->next = kReverse(next,k);
    }

    // step3: return head of reversed list

    return prev;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    int k = 2;
    cout<<"Original: ";
    printList(head);

    head = kReverse(head, k);
    cout<<"After k reverse: ";
    printList(head);
    return 0;
}