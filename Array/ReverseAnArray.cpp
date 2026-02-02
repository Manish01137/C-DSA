#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter ther size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reverse of an Array: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}