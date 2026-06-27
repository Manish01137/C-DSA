#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:

    // Function to check if person A knows person B
    bool knows(vector<vector<int>> &M, int a, int b) {
        return M[a][b] == 1;
    }

    int celebrity(vector<vector<int>> &M, int n) {

        stack<int> s;

        // Step 1: Push all people into the stack
        for (int i = 0; i < n; i++) {
            s.push(i);
        }

        // Step 2: Find the potential celebrity
        while (s.size() > 1) {

            int a = s.top();
            s.pop();

            int b = s.top();
            s.pop();

            if (knows(M, a, b)) {
                // a knows b, so a cannot be celebrity
                s.push(b);
            }
            else {
                // a does not know b, so b cannot be celebrity
                s.push(a);
            }
        }

        int candidate = s.top();

        // Step 3: Row Check
        bool rowCheck = false;
        int zeroCount = 0;

        for (int i = 0; i < n; i++) {
            if (M[candidate][i] == 0)
                zeroCount++;
        }

        if (zeroCount == n)
            rowCheck = true;

        // Step 4: Column Check
        bool colCheck = false;
        int oneCount = 0;

        for (int i = 0; i < n; i++) {
            if (i != candidate && M[i][candidate] == 1)
                oneCount++;
        }

        if (oneCount == n - 1)
            colCheck = true;

        // Step 5: Final Answer
        if (rowCheck && colCheck)
            return candidate;

        return -1;
    }
};

int main() {

    Solution obj;

    vector<vector<int>> M = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 1, 0}
    };

    int n = M.size();

    int ans = obj.celebrity(M, n);

    if (ans == -1)
        cout << "No Celebrity Found";
    else
        cout << "Celebrity is person " << ans;

    return 0;
}