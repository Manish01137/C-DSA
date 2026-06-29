#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int element) {

    // Base Case
    if (s.empty()) {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s, element);

    s.push(num);
}
void reverseStack(stack<int> &s){
    // base case
    if(s.empty()){
        return;
    }
    // store top elememt
    int num = s.top();
    s.pop();
    
    // reverse remaining stack
    reverseStack(s);
    
    // insert removed element at bottom
    insertAtBottom(s,num);
}

int main() {

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Original Stack (Top to Bottom): ";

    stack<int> temp = s;

    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;

    // // insertAtBottom(s, 5);

    // cout << "After Inserting at Bottom: ";

    // while (!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
   
    reverseStack(s);
    cout<<"Reversed Stack:";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}