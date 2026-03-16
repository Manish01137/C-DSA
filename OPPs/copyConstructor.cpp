#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
   Hero(){
      cout<<"Default constructor ";
   }
   Hero(int health,char level){
       this->level = level;
       this->health = health;
   }
   Hero(Hero& temp){
       cout<<"Health "<<this->health<<endl;
       cout<<"Level "<<this->level<<endl;
   }
   void  print(){
        cout<<"health"<<this->health<<endl;
        cout<<"level"<<this->level<<endl;
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
    Hero Suresh(70,'C');
    Suresh.print();


    // copy constructor
    Hero Ritesh(Suresh);
    Ritesh.print();
    return 0;
}