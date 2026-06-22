#include<iostream>
#include<stack>
using namespace std;
int main(){
    // creation of stack
    stack<int> s;
    // push operation
    s.push(2);
    s.push(3);

    // pop 
    s.pop();
    cout<<"printing top element "<<s.top();
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty ";
    }
    cout<<endl;
    cout<<"size of stack is "<<s.size();
    return 0;
}