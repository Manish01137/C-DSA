#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    int count = 0;
    int size = s.length();
    for(int i=0;i<size;i++){
        if(s[i]>='A' && s[i]<='Z'){
            count++;
        }
    }
    cout<<count;
    return 0;
}