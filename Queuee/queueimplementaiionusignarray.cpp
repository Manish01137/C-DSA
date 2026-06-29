#include<iostream>
#include<queue>
using namespace std;

class Queue {

public:

    int *arr;
    int front;
    int rear;
    int size;

    Queue() {

        size = 100001;
        arr = new int[size];

        front = 0;
        rear = 0;
    }

    // Insert
    void enqueue(int data) {

        if(rear == size) {
            cout << "Queue Overflow" << endl;
            return;
        }

        arr[rear] = data;
        rear++;
    }

    // Delete
    int dequeue() {

        if(front == rear) {
            return -1;
        }

        int ans = arr[front];

        arr[front] = -1;

        front++;

        if(front == rear) {
            front = 0;
            rear = 0;
        }

        return ans;
    }

    // Front Element
    int getFront() {

        if(front == rear) {
            return -1;
        }

        return arr[front];
    }

    // Empty or Not
    bool isEmpty() {

        return front == rear;
    }

};
int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.getFront() << endl;

    cout << q.dequeue() << endl;

    cout << q.getFront() << endl;

    cout << q.dequeue() << endl;

    cout << q.dequeue() << endl;

    cout << q.dequeue() << endl;

    return 0;
}