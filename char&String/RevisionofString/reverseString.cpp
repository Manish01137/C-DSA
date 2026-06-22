#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int size = s.length();
    for(int i=size;i>=0;i--){
        cout<<s[i]<<"";
    }
    return 0;
}