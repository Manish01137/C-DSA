#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of row: ";
    cin>>n;

    int m;
    cout<<"Enter the size of column: ";
    cin>>m;
    int** arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }

    //cretation done

    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    // giving output3

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // relasing memory 
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;
    return 0;
}