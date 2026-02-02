#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of number: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"These are the elements of array: ";
    cout<<endl;
    int m = 2;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            cout<<i;
        }
        else{
            cout<<"elememt not found";
        }
    }
}