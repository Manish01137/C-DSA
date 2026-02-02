#include<iostream>
using namespace std;

int getMax(int arr[], int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    cout<<"Ente the sizze of array: ";
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
    cout<<"Maximum value is : "<<getMax(arr,n)<<endl;
    cout<<"Minimum value is: "<<getMin(arr,n)<<endl;
    return 0;
}