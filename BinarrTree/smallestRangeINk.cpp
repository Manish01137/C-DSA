#include<iostream>
using namespace std;
class Heap {
public:
    int arr[100];
    int size;

    Heap() {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val) {
        size++;
        int index = size;
        arr[index] = val;

        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                return;
            }
        }
    }

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
class node{
    public:
    int data;
    int row;
    int col;

    node(int d,int r,int c){
        data = d;
        row = r;
        col = c;
    }
};
class compare{
   public:
   bool operation()(node* a,node* b){
       return a->data > b->data;
   }
   for(int i=0;i<k;i++){
    int element = a[i][0];
    mini = min(mini,element);
    maxi = max(max,element);
    minHeap.push(new node(element,i,0));
   }
   int start = mini,end = maxi;
   while(!miniHeap.empty()){
      node* temp = minHeap.top();
      miniHeap.pop();

      mini = temp->data;
      if(maxi-mini<end-start){
        start = mini;
        end = maxi;
      }

   }
   if(temp->col<n){
    maxi = max(max,a([temp->row][temp->col +1]));
    miniHeap.push(new node(a[temp->row][temp->col+1],temp->row,temp->col+1));
   }
   else{
    break;
   }
};
int kSorted(vector<vector<int>> &a,int k,int n){
    int mini = INT_MAX, maxi = INT_MIN;
    priority_queue<node,vector<node>, campare>minHeap;
}
int main(){

    return 0;
}