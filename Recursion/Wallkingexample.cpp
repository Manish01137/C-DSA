#include<iostream>
using namespace std;

void reachHome(int src,int dest){

    cout<<"Source "<<src<<"destination "<<dest<<endl;
    if(src==dest){
        cout<<"pahuch gya "<<endl;
        return;
    }

    src++;
    reachHome(src,dest);
}
int main(){
    int dest = 10;
    int src = 1;

    reachHome(src,dest);
    return 0;
}