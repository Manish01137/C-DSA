#include<iostream>
using namespace std;
class Solution{
     public:
     bool validPalindrome(string s){
        int n = s.length();
        int left = 0;
        int right = n-1;

        while(left<right){
            if(s[left]==s[right]){
                 return true;
                left++;
                right--;
            }
            else{
                return false;
            }
        }
       
     }
     
};
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    
    Solution obj;
    cout<<obj.validPalindrome(s);

    return 0;
}

// class Solution {
// public:
//     bool isPalindrome(string s) {

//         int left = 0;
//         int right = s.length() - 1;

//         while(left < right) {

//             while(left < right && !isalnum(s[left])) {
//                 left++;
//             }

//             while(left < right && !isalnum(s[right])) {
//                 right--;
//             }

//             if(tolower(s[left]) != tolower(s[right])) {
//                 return false;
//             }

//             left++;
//             right--;
//         }

//         return true;
//     }
// };