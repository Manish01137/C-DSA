#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<num;
    cout<<endl;
    // address of Operater

    cout<<"Address of num is: "<<&num<<endl;
    int *ptr = &num;
    cout<<ptr;
    double d = 4.3;
    double *p2 = &d;
    cout<<"Address is "<<p2<<endl;
    cout<<"Value is "<<*p2<<endl;
    cout<<"Size of integer is "<<sizeof(num)<<endl;
    cout<<"Size of integer is "<<sizeof(ptr)<<endl;
    return 0;
}