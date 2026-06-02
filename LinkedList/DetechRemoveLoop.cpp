#include<iostream>
#include<map>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

// ✅ Fixed print function
void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// ✅ Fixed function name + logic same
bool isCircularList(Node* head){
    if(head == NULL){
        return true;
    }

    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }
    return false;
}

// ✅ Loop detection using map
bool detectLoop(Node* head){
    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // ❌ Fixed typo here
    head->next->next->next->next = new Node(5);

    // ❌ Create circular link
    head->next->next->next->next->next = head;

    // ❌ Fixed function name call
    if(isCircularList(head)){
        cout << "Linked list is circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular" << endl;
    }

    return 0;
}