#include<iostream>
#include<vector>
#include<stack>
vector<int> nextSmallerElement(vector<int> &arr,int n){
    stack<int> s;
    s.push(-1);
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top()>=crr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
using namespace std;
int main(){

    return 0;
}