#include<iostream>
using namespace std;
class Hero{
    public:
    // properties
    int health;
    char level;
    
    Hero(){
       cout<<"constuctor called"<<endl; 
    }
    
    // paramerterised Constructor
    Hero(int health){
        this->health = health;
    }

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
   // object created statically
    Hero a;

    //dyanmically 
    Hero *h = new Hero;


    // cout<<"Level is "<<a.level<<endl;
    // cout<<"Health is "<<a.getHealth()<<endl;

    // // dynamically
    // Hero *b = new Hero;
    // cout<<"Level is "<<(*b).level<<endl;
    // cout<<"Health is "<<(*b).getHealth()<<endl;
    
    // cout<<"level is"<<b->level<<endl;
    // cout<<"Health is"<<b->getHealth()<<endl;

    // cout<<"Size of Ramesh is : "<<sizeof(ramesh)<<endl;
    // cout<<"Ramesh Health is "<<ramesh.getHealth()<<endl;

    // ramesh.setHealth(70);
    // ramesh.level = 'A';

    // cout<<"Health is "<<ramesh.getHealth()<<endl;
    // cout<<"Level is "<<ramesh.level<<endl;
    return 0;
}