#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0]>arr[1])
      return false;
    else{
        bool remainingPart = isSorted(arr+1,n-1);
        return remainingPart;
    }
    
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
    cout<<endl;
    
    bool ans = isSorted(arr,n);
    if(ans){
        cout<<"Arrray is Sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted "<<endl;
    }
    return 0;
}