#include<iostream>
using namespace std;
void sumOfArray(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of Array: ";
    cout<<sum;
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
    cout<<"Elements of array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sumOfArray(arr,n);
    return 0;
}