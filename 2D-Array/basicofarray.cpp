#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout << "Enter the size of row: ";
    cin >> n;

    cout << "Enter the size of column: ";
    cin >> m;

    int arr[n][m];

    cout << "Enter the elements of array:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];   // ✅ input
        }
    }

    cout << "\nArray elements are:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
