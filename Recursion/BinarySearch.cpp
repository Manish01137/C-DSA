#include<iostream>
using namespace std;
bool binarySearch(int *arr,int s,int e,int k){
     int mid = s + (e-s)/2;
    if(s>e)
    return false;
    if(arr[mid] == k)
    return 1;
     

    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
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
    cout<<endl<<"Elements of array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"enter the search element: ";
    cin>>key;
    cout<<"Present or not"<<binarySearch(arr,0,n,key);
    return 0;
}