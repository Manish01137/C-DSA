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
void DeleteAtPosition(Node* &head,int position){
    if(position==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* prev = NULL;
    Node* curr = head;

    int cnt = 1;

    while(cnt<position){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    delete curr;
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
    Node* node3 = new Node(40);
    Node* node4 = new Node(50);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* head = node1;
    print(head);
    cout<<endl;
    DeleteAtPosition(head,2);
    print(head);
    return 0;
}