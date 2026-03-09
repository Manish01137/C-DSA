#include<iostream>
using namespace std;
class Hero{
    public:
    // properties
    int health;
    char level;
    
    void  print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
       level = ch;
    }
};
int main(){
    
    Hero ramesh;

    cout<<"Ramesh Health is "<<ramesh.getHealth()<<endl;

    ramesh.setHealth(70);
    ramesh.level = 'A';

    cout<<"Health is "<<ramesh.getHealth()<<endl;
    cout<<"Level is "<<ramesh.level<<endl;
    return 0;
}