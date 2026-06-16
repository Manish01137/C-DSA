#include<iostream>
#include<map>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

bool detectLoop(Node* head){
    if(head == NULL)
        return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){

        // If node is already visited, loop exists
        if(visited[temp]){
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }
        Node* slow = head;
        Node* fast = head;
        while(slow!=NULL && fast!=NULL){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
            if(slow == fast){
                cout<<"Present at "<<slow->data<<endl;
                return slow;
            }
        
        
    }
    return NULL;
}
Node* getStartingNode(Node* head){
    if(head==NULL)
       return NULL;
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node* head){
    if(head==NULL){
        return;
    }
    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;
    while(temp->next!=startOfLoop){
        temp = temp->next;

    }
    temp->next = NULL;

}
int main(){

    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    Node* node4 = new Node(40);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    Node* head = node1;

    print(head);

    if(floydDetectLoop(head)!=NULL)
        cout << "Loop is present" << endl;
    else
        cout << "Loop is not present" << endl;

    // Creating a loop
    node4->next = node2;

    if(floydDetectLoop(head))
        cout << "Loop is present" << endl;
    else
        cout << "Loop is not present" << endl;

    Node* loop = getStartingNode(head);
    cout<<"loop starts at "<<loop->data<<endl;

    removeLoop(head);
    print(head);

    return 0;
}