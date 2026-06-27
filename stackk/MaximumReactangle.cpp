#include<iostream>
#include<stack>
using namespace std;
class Solution{
    public:
    int maxArea(int M[MAx][MAX],int n,int m){
        int area = largestReactangleArea(M[0],m);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // row update: by adding previous row's value
                if(M[i][j]!=0)
                M[i][j] = M[i][j] + M[i-1][j];
            else{
                M[i][j] = 0;
            }
            // entire row is updated now
            area = max(area,largestReactangleArea(M[i],m));
            }
            return area;
        }
    }
};
int main(){
    return 0;
}