#include<iostream>
using namespace std;
class Hero{
   public:
   int health;
   char *name;
   char level;

   Hero(){
    cout<<"simple constructor called"<<endl;
    name = new char[100];
   }
   void  print(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }
};
int main(){
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Manish";
    hero1.setName(name);

    hero1.print();
    return 0;
}