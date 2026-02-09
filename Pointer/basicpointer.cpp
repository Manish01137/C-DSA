#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<num;
    cout<<endl;
    // address of Operater

    cout<<"Address of num is: "<<&num<<endl;
    int *ptr = &num;
    cout<<*ptr;
    return 0;
}