#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>& st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }
    int num = st.top();
    st.pop();

    insertAtBottom(st,x);
    st.push(num);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    insertAtBottom(st,5);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}