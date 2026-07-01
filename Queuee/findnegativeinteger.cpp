#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<long long> printFirstNegativeInteger(long long A[], long long N, long long K) {

    deque<long long> dq;      // Stores indices of negative elements
    vector<long long> ans;    // Stores answers

    // Process the first window
    for (int i = 0; i < K; i++) {
        if (A[i] < 0) {
            dq.push_back(i);
        }
    }

    // Store answer for the first window
    if (!dq.empty()) {
        ans.push_back(A[dq.front()]);
    } else {
        ans.push_back(0);
    }

    // Process the remaining windows
    for (int i = K; i < N; i++) {

        // Remove indices that are out of the current window
        if (!dq.empty() && (i - dq.front()) >= K) {
            dq.pop_front();
        }

        // Add current element if it is negative
        if (A[i] < 0) {
            dq.push_back(i);
        }

        // Store answer for the current window
        if (!dq.empty()) {
            ans.push_back(A[dq.front()]);
        } else {
            ans.push_back(0);
        }
    }

    return ans;
}

int main() {

    long long A[] = {12, -1, -7, 8, -15, 30, 16, 28};
    long long N = 8;
    long long K = 3;

    vector<long long> ans = printFirstNegativeInteger(A, N, K);

    cout << "First negative number in every window: ";

    for (long long x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}