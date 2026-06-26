#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<s.top();
    s.pop();
    cout<<endl;
    cout<<s.top();
    cout<<endl;
    if(s.empty()){
        cout<<"Empty";
    }
    else{
        cout<<"Not Empty";
    }
    cout<<endl;
    cout<<s.size();
    return 0;
}