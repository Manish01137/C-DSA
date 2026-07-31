#include<iostream>
using namespace std;
class heap{

}
void callMedian(vector<int> &arr,priority_queue<int>* maxi,priority_queue<int,vector<int>,greater<int)
vector<int> findMedian(vector<int>& arr,int n){
    vector<int> ans;
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int> > minHeap;
    int median = -1;
    for(int i=0;i<n;i++){
        callMedian(arr,maxheap,minheap,median);
        ans.push_back(median);
    }
    return ans;
}
int main(){

    return 0;
}