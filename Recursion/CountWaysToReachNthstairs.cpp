#include<iostream>
using namespace std;
int CountDistance(int n){
    if(n<0){
        return 0;
    }
    if(n==0)
    return 1;

    return CountDistance(n-1) + CountDistance(n-2);
}
int main(){
    int n;
    cout<<"Entere the number for stairs: ";
    cin>>n;
    int ans = CountDistance(n);
    cout<<ans;

    return 0;
}