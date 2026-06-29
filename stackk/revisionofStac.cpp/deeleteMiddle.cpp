#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &inputStack,int count, int size){
    if(count==size/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack,count+1,size);
    inputStack.push(num);
}
void deletMiddle(stack<int> &inputStack){
    int size = inputStack.size();
    solve(inputStack,0,size);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Original stack:\n";
    stack<int> temp = s;
    while(!temp.empty()){
        cout<<temp.top()<<"";
        temp.pop();
    }
    cout<<endl;
    deletMiddle(s);
    cout<<"after deleting middle:\n";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}