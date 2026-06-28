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
    // insert operation
    void push(int element){
        if(size-top>1){
            top++;
            arr[top] =element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    // pop operation
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    // peek operation
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack Empty"<<endl;
            return -1;
        }
    }
    // empty
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
};
int main(){

    return 0;
}