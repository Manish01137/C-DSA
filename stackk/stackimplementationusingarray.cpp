#include<iostream>
#include<string>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    // push function 
void push(int element){
    if(size-top>1){
        top++;
        arr[top] = element;
    }
    else{
        cout<<"stack Overflow"<<endl;
    }
}
    // pop function
void pop(){
    if(top>=0){
        top--;
    }
    else{
        cout<<"Stack Underflow"<<endl;
    }
}
// peek function
int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"Stack Empty "<<endl;
        return -1;
    }
}
// empty function
bool isEmpty(){
   return false;
}
};



int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.push(40);
    cout<<s.peek()<<endl;
    return 0;
}