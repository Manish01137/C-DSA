#include<iostream>
#include<stack>
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

   void push(int element){
      if(size - top > 1){
        top++;
        arr[top] = element;
      }
      else{
        cout<<"Stack Overflow"<<endl;
      }
   }
   void pop(){
      if(top>=0){
        top--;
      }
      else{
        cout<<"Stack underFlow"<<endl;
      }
   }
   int peek(){
    if(top>=0 && top<size)
      return arr[top];
    else{
        cout<<"stack is empty"<<endl;
        return -1;
    }
   }
   bool isEmpty(){
       if(top == -1){
        return true;
       }
       else{
        return false;
       }
   }
};
int main(){

     Stack st(5);

     st.push(22);
     st.push(34);
     st.push(43);

     cout<<st.peek()<<endl;

     st.pop();

     cout<<st.peek()<<endl;

     st.pop();

     cout<<st.peek()<<endl;

     st.pop();

     cout<<st.peek()<<endl;

     if(st.peek()){
        cout<<"Stack is Empty mere dost"<<endl;
     }
     else{
        cout<<"Stack is not Empty mere dost"<<endl;
     }
   /*
    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    // size of stack

    cout<<"Size of stack is "<<s.size();
    return 0;
    */
}