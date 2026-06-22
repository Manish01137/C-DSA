#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Top element: "<<s.top()<<endl;

    s.pop();

    cout<<"Top element: "<<s.top()<<endl;

    cout<<"Size: "<<s.size()<<endl;

    if(s.empty()){
        cout<<"Stack is Empty";
    }
    else{
        cout<<"Stack is not Empty";
    }
    return 0;
}