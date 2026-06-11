#include<iostream>
using namespace std;
class Node{
     public:
     int data;
     // constructor
     Node* next;
     Node(int data){
        this->data = data;
        this->next = NULL;
     }
     // Desctructor
     ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
     }
};

void insertNode(Node* &tail, int element, int d){

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void deleteNode(Node* &tail, int value){
    if(tail==NULL){
        cout<<"List is empty, please check again"<<endl;
        return;
    }
    else{
        // non empty

        // asumming that value is present in the linkdin list

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data!=value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node* &tail){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    Node* temp = tail;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != tail);

    cout << endl;
}
int main(){
    Node* tail = NULL;

    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);

    deleteNode(tail,3);
    print(tail);
    return 0;
}