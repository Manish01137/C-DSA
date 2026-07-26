#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size = 0;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
       size = size+1;
       int index = size;

       arr[index] = val;
       while(index>1){
        int parent = index/2;
        if(arr[parent]<arr[index]){
            swap(arr[parent],arr[index]);
            index = parent;
        }
        else{
            return;
         }
       }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
int kthSmallest(int arr[],int i,int r,int k){
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    for(int i=k;i<r;i++){
        if(arr[i]<pq.top()){
            pq.top();
            pq.push(arr[i]);
        }
    }
    int ans = pq.top();
    return ans;
}
long long minCost(long long arr[],long long n){
    priority_queue<long long, vector<long,long>, greatere<long, long>>pq;
    long long cost = 0;
    while(pq.size()>1){
        long long a = pq.top();
        pq.pop();

        long long b = pq.top();
        pq.pop();

        long long sum = a+b;
        cost+=sum;
        pq.push(sum);
    }
    return cost;
}
int main(){

    return 0;
}