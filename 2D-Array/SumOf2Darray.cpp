#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of row: ";
    cin>>n;
    int m;
    cout<<"Enter the size of col: ";
    cin>>m;
   
    int arr[n][m];
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
    cout<<endl;
    cout<<"Sum of 2D array: ";
    for(int i=0;i<n;i++){
         int sum = 0;
        for(int j=0;j<m;j++){
            sum = sum + arr[i][j];
        }  
          cout<<sum<<endl;;
    }
  int maxi = INT_MIN;
  int rowIndex = -1;
  for(int i=0;i<n;i++){
    int sum = 0;
    for(int j=0;j<m;j++){
        sum+=arr[i][j];
    }
    if(sum>maxi){
        maxi = sum;
        rowIndex = i;
    }
  }
  cout<<"The Maximum sum is: "<<maxi<<endl;
  return rowIndex;
    return 0;
}