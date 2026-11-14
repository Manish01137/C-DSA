#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b;
    cout<<"Enter the power number: ";
    cin>>b;
    int x = power(a,b);
    cout<<x;
    return 0;
}