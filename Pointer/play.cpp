#include<iostream>
using namespace std;
int main(){
    // int *p = 0;
    // cout<<*p<<endl;
    // int i = 5;
    // int *p = 0;
    // p = &i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int num = 5;
    // int a = num;
    // a++;
    // cout<<num<<endl;
    // int *p = &num;
    // cout<<"Before"<<num<<endl;
    // (*p)++;
    // cout<<"After"<<num<<endl;
    int i = 3;
    int *t = &i;
    // cout<<(*t)++<<endl;
    *t = *t + 1;
    cout<<*t<<endl;
    t = t+ 1;
    return 0;
}