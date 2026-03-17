#include<iostream>
using namespace std;
class Hero{
   public:
   int health;
   char *name;
   char level;
   static int timeToComplete;
   Hero(){
    cout<<"simple constructor called"<<endl;
    name = new char[100];
   }
   Hero(int health){
    this->health = health;
   }
   Hero(int health,char level){
    this->level = level;
    this->health = health;
   }
   void  print(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
    }

    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        cout<<"Copy constructor called "<<endl;
        this->health = temp.health;
        this->level = temp.level;
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
    ~Hero(){
        cout<<"Destructor bhai called"<<endl;
    }
};

int Hero::timeToComplete = 5;
int main(){
    cout<<Hero::timeToComplete<<endl;
    return 0;
}