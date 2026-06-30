#include<iostream>
#include<stack>
using namespace std;
void sortedInsert(stack<int> &s,int num){
    if(s.empty() || s.top()>num){
        s.push(num);
        return;
    }
    int temp = s.top();
    s.pop();

    sortedInsert(s,num);
    s.push(temp);
}
void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    sortStack(s);
    sortedInsert(s,num);
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(1);
    s.push(2);

    cout<<"Original Stack\n";
    stack<int> temp = s;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
    sortStack(s);
    cout<<"sorted stack\n";

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}