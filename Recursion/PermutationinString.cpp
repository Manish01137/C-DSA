#include <iostream>
using namespace std;

void solve(int arr[], int index, int n) {

    // Base Case
    if (index == n) {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }

    // Generate permutations
    for (int i = index; i < n; i++) {

        swap(arr[index], arr[i]);   // choose
        solve(arr, index + 1, n);   // explore
        swap(arr[index], arr[i]);   // backtrack
    }
}

void permutation(int arr[], int n) {
    solve(arr, 0, n);
}

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nPermutations:\n";

    permutation(arr, n);

    return 0;
}