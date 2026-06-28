#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "Manish";
    stack<char> s;
    // step 1: push all characters into the stack
    for(int i=0;i<str.length();i++){
        s.push(str[i]);
    }
    // step2: pop all the characters and build the reverse string
    string ans = "";
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    cout<<"Original String: "<<str<<endl;
    cout<<"Reversed String: "<<ans<<endl;
    return 0;
}