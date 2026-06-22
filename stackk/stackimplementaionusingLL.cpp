#include<iostream>
#include<string>
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
    void push(int data){
    Node* temp = new Node(data);
    temp->next = top;
    top = temp;
}
void pop(){
    if(top==NULL){
        cout<<"Stack Underflow"<<endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}
int peek(){
    if(top==NULL){
        return -1;
    }
    return top->data;
}
bool isEmpty(){
    return top == NULL;
}
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top Element: "<<s.peek()<<endl;
    s.pop();
    cout<<"Top Element: "<<s.peek()<<endl;
    return 0;
}