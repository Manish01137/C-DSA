#include <iostream>
#include <map>
#include<vector>
#include <unordered_map>
using namespace std;
int maximumFrequency(vector<int> &arr,int n){
    unordered_map<int, int> count;

    int maxFreq = 0;
    int maxAns = 0;
    
    // count frequency
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
        maxFreq = max(maxFreq,count[arr[i]]);
    }
    // Return first element having maximum frequencya
    for(int i=0;i<arr.size();i++){
        if(maxFreq = count[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
   
}
int main(){
    vector<int> arr = {1,2,3,1,2,1,4,2,2};
    cout<<maximumFrequency(arr,arr.size());
    return 0;
}