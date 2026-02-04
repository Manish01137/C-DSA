#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n, m;
    cout << "Enter the size of row: ";
    cin >> n;

    cout << "Enter the size of column: ";
    cin >> m;

    int arr[n][3];   // ⚠ column must match

    cout << "Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    cout << "\nElements of array:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    if(isPresent(arr, target, n, m)){
        cout << "Element Found\n";
    } else {
        cout << "Not Found\n";
    }

    return 0;
}
