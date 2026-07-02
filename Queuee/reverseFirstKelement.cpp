#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int> s;

    // Step 1: Push first k elements into stack
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }

    // Step 2: Push stack elements back into queue
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }

    // Step 3: Rotate the remaining elements
    int t = q.size() - k;

    while (t--)
    {
        q.push(q.front());
        q.pop();
    }

    return q;
}

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int k = 3;

    q = modifyQueue(q, k);

    cout << "Modified Queue: ";

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}