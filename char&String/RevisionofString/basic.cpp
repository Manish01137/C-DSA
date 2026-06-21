#include<iostream>
using namespace std;
int main(){
    string name;
    // getline for space + name
    getline(cin,name);
    cout<<name<<endl;
    // access character
    string s = "Manish";
    cout<<s[0]<<endl;;
    // modify character
    s[0] = 'H';
    cout<<s<<endl;;
    // length of string 
    string k = "Manish";
    cout<<k.length()<<endl;

    // traversing string
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    // Range Based loop
    for(char ch:s){
        cout<<ch<<" ";
    }
    cout<<endl;
    // ASCII value
    char ch = 'A';
    cout<<(int)ch;
    cout<<endl;
    // converting lowerecase to uppercase
    char chh = 'a';
    chh = chh-32;
    cout<<chh;
    return 0;
}