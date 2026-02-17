#include<iostream>
using namespace std;
int Fibo(int n){
   // base case
   if(n==0)
   return 0;
  if (n==1)
  return 1;
   
  int ans = Fibo(n-1)+Fibo(n-2); 
  return ans;
 
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
     Fibo(n);
   int ans = Fibo(n);
   cout<<ans;
    return 0;
}