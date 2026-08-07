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
int main(){

    return 0;
}