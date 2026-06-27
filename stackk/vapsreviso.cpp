#include<iostream>
#include<stack>
using namespace std;
class Stack{
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(top == size-1){
            cout<<"Stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top] = element;
    }
    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];
    }
};
int main(){
    
    return 0;
}