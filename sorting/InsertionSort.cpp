#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
             if(arr[j]>temp){
                arr[j+1] = arr[j];
             }
             else{
                break;
             }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int n;
    cout<<"enter the size of array: ";
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
    insertionSort(arr,n);
    cout<<endl<<"Elements in Insertion Sort: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}