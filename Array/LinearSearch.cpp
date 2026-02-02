#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the size of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"Enter the element of array which you want: ";
    cin>>x;
    
    cout<<endl;
    bool found = false;
    cout<<"Search the element in the array: ";
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            cout<<i;
            found = true;
            break;
        }
        else(){
            cout<<"Element not found";
        }
    }
    return 0;
}