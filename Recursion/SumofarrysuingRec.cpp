#include<iostream>
using namespace std;
int sumOfArray(int arr[],int n){
   if(n==0)
   return 0;
return arr[n-1] + sumOfArray(arr,n-1); 
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int ans = sumOfArray(arr,n);
    cout<<endl;
    cout<<"Sum of array: ";
    cout<<ans;
    return 0;
}