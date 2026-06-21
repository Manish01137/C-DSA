#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
   int  size = s.length();
    int count = 0;
    for(int i=0;i<size;i++){
        if(s[i]=='a' || s[i] == 'e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
             count++;
        }
    }
    cout<<count;
    return 0;
}