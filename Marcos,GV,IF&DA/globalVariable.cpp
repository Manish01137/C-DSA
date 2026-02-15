#include<iostream>
using namespace std;

int score = 15;

void a(int& i){
    cout<<score<<"in a"<<endl;
    
    cout<<i<<endl;
}
void b(){

}
int main(){
    int i = 5;
    a(i);
    return 0;
}