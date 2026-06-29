#include<iostream>
#include<queue>
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
class Queue{
    public:
    Node* front;
    Node* rear;

    Queue(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data){
        Node* newNode = new Node(data);
        if(front == NULL){
            front = newNode;
            rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }
    // dequeue element remove
    int dequeue(){
        if(front == NULL){
            return -1;
        }
        int ans = front->data;
        Node* temp = front;
        front = front->next;
        if(front==NULL){
            rear = NULL;
        }
        delete temp;
        return ans;
    }

    // get front
    int getFront(){
        if(front==NULL){
            return -1;
            
        }
        return front->data;
    }
    // check empty
    bool isEmpty(){
        return front == NULL;
    }
};
int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<"Front: "<<q.getFront()<<endl;
    cout<<"Delete: "<<q.dequeue()<<endl;
    cout<<"Front: "<<q.getFront()<<endl;
    cout<<"Delete: "<<q.dequeue()<<endl;
    cout<<"Front: "<<q.getFront()<<endl;
    cout<<"Queue Empty: "<<q.isEmpty()<<endl;
    return 0;
}