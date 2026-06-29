#include<iostream>
#include<stack>
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
class Stack{
    public:
    Node* top;
    Stack(){
        top = NULL;
    }
    // push operation
    void push(int data){
        Node* temp = new Node(data);
        temp->next = top;
        top = temp;
    }
    // pop operation
    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    // peek operation
    int peek(){
        if(top==NULL){
            cout<<"Stack is Empty\n";
            return -1;
        }
        return top->data;
    }
    // empty operation
    bool isEmpty(){
        return top == NULL;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top: "<<s.peek()<<endl;
    s.pop();
    cout<<"Top: "<<s.peek()<<endl;
    if(s.isEmpty()){
        cout<<"Empty";
    }
    else{
        cout<<"Not Empty";
    }
    return 0;
}