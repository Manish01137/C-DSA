#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    
    int max = INT_MIN;
    for(int i=0;i<5;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    int smax = INT_MIN;
    for(int i=0;i<5;i++){
        if(arr[i]!=max && smax<arr[i]){
            smax = arr[i];
        }
    }
    cout<<max<<endl;
    cout<<smax<<endl;
    return 0;
}