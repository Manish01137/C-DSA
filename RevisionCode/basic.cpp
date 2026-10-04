#include<iostream>
using namespace std;
bool isPrime(int n,int i){
    if(n<=1){
        return false;
    }
    if(i*i>n){
        return true;
    }
    if(n%i==0){
        return false;
    }

    return isPrime(n,i+1);
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    
    if(n==1){
        cout<<"1 is neither prime not composite";
    }
    else if(isPrime(n,2)){
        cout<<n<<"Is a Prime Number";
    }
    else{
        cout<<n<<"Is not a Prime Number";
    }
    return 0;
}