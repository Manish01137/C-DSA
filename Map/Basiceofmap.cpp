#include<iostream>
#include<set>
#include<map>
using namespace std; 
int main(){
    // set<int> s;
    // s.insert(5);
    // s.insert(4);
    // s.insert(2);
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    map<int,int> m;
    m[1] = 30;
    m[2] = 40;
    m[3] = 50;
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
       
    }
    return 0;
}