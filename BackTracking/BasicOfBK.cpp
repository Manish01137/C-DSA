#include<iostream>
using namespace std;
bool isSafe(int newx,int newy,vector<vector<int>> &vis,vector<vector<int>> &arr,int n){
    if((newx>=0 && newx<n) && (newy>=0 && newy<n) && vis[newx][newy]!=1 && arr[newx][newy] ==1){
       return true;
    }
    else{
        return false;
    }
}
void solve(int x,int y, vector<vector<int>> &arr,int n,vector<string> &ans,vector<vector<bool>> &vis,string path){
    // base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    // 4 movement
    // D,L,R,U
    // Down
    if(isSafe(x+1,y,visited,arr,n)){
       vis[x][y] = 1;
       solve(x+1,y,arr,n,ans,vis,path+'D');
       vis[x][y] = 0
    }
}
vector<string> searchMaze(vector<vector<int>> &arr,int n){
    vector<string> ans;
    vector<vector<bool>> visited(n,vector<bool>(n,0));
    string path = "";
    solve(0,0,arr,n,ans,visited,path);
    return ans;
}

void addSolution(vector<vector<int>> &ans,vector<vector<int>> &board){
    vector<int> temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);

}
bool isSage(int row,int col,vector<vector<int>> &board,int n){
    int x = row;
    int y = col;

    // check for same row
    while(col>=0){
        if(board[x][y]==1)
        return false;
        y--;
    }
    x = row;
    y = col;
    
}
void solve(int col,vector<vector<int>> &ans,vector<vector<int>> &board,int n){
     // base case
     if(col==n){
        addSolution(board,ans);
        return;
     }
     // solve one case and rest Recursion will take care
     for(int row = 0;row<n;row++){
        if(isSafe(row,sol,board,n)){
            // if placing queen is safe
            board[row][col] = 1;
            solve(col+1,ans,board,n);
            // backtack
            board[row][col] = 0;
        }
     }
}
vector<vector<int>> nQueens(int n){
     vector<vector<int>> board(n,vector<int>(n,0));
     vector<vector<int>> ans;
     solve(0,ans,board,n);

     return ans;
}
int main(){

    return 0;
}