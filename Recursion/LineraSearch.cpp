#include<iostream>
using namespace std;
bool Linearsearch(int arr[],int n,int target){
    if(n==0)
    return false;
    if(arr[0]==target){
       return true;
    }
    else{
        bool remainingPart = Linearsearch(arr+1,n-1,target);
        return remainingPart;
    }
   
}
int main(){
    int n;
    cout<<"Enter the number: ";
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
    int target;
    cout<<"Enter the target number which you want to search: ";
    cin>>target;
    bool ans = Linearsearch(arr,n,target);
   if(ans){
      cout<<"It is Present ";
   }
   else{
    cout<<"It is not Present ";
   }
    return 0;
}