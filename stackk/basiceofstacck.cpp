#include<iostream>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}