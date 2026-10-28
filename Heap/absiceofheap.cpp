#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    ll x = 10;
    priority_queue<int,vector<int>,greater<int> > pq;
    pq.push(10);
    pq.push(2);
    pq.push(-6);
    pq.push(4);
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();
    return 0;
}