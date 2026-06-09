#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->node = NULL;
    }
};
int main(){
    Node* a1 = new Node(1);
    Node* a2 = new Node(2);
    Node* a3 = new Node(3);
    Node* a4 = new Node(4);

    return 0;
}