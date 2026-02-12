#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int* p = &i;
    int** p2 = &p;
    cout<<endl;
    cout<<"Sab shi chal ra hai";
    cout<<endl;
    cout<<"Printing p"<<p<<endl;
    cout<<"Address of p "<<&p<<endl;;

    cout<<*p2;
    cout<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;


    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<endl;
    cout<<&p<<endl;
    cout<<&p2<<endl;
    return 0;
}