#include<iostream>
using namespace std;
class Solution{
    public:
    string FirstNonRepeating(string A){
        unordered_map<char, int> count;
        queue<int> q;
        string ans = "";
        for(int i=0;i<A.length();i++)[
            char ch = A[i];
            // increase count
            count[ch]++;
            //queue me push karo
            q.push(ch);
        ]
    }
}
int main(){

    return 0;
}