#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string name: ";
    cin>>s;
    int size = s.length();
    int count = 0;
    for(int i=0;i<size;i++){
        if(s[i]>'a' && s[i]<'z'){
            count++;
        }
    }
    cout<<count;
    return 0;
}