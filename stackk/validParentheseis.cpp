#include<iostream>
#include<stack>
using namespace std;
bool isValidParenthesis(string expression){
    stack<char> s;
    for(int i=0;i<expression.length();i++){
        char ch = expression[i];
        
        // if opening bracket, stack push
        // if close braket, stacktop check and pop

        if(ch=='(' || ch=='[' || ch=='{'){
            s.push(ch);
        }
        else{
            // for closing bracket
        if(!isEmpty()){
            char top = s.top();
            if(matches(top,ch)){
                s.pop();
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
        }

    }
    if(s.empty())
       return true;
}
int main(){
   
    return 0;
}