#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "Babbar";
    Stack<int>s;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while(!isEmpty){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"answer is "<<ans;
    return 0;
}