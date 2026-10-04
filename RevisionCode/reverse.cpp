#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    int lastdigit = 0;
    int reverse = 0;
    while(n>0){
        reverse*=10;
        lastdigit = n%10;
        reverse+=lastdigit;
        n/=100;
    }
    cout<<reverse;
    return 0;
}