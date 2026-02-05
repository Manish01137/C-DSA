#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of Row: ";
    cin>>n;
    cout<<"Enter the size of column: ";
    cin>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    cout<<"Enter the element of 2D Array: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Arrray In wave Form: ";
    for(int i=0;i<n;i++){
        if(i%2==1){
            for(int j=m-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    return 0;
}