#include<iostream>
using namespace std;
class Solution{
    public:
    bool isPalindrome(string s){
        int left = 0;
        int right = s.length()-1;

        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
int main(){
    // string s = "madam";
    // string rev = s;
    // reverse(rev.begin(),rev.end());
    // if(s==rev){
    //     cout<<"Palindrome";
    // }
    // else{
    //     cout<<"Not Palindrome";
    // }
    string s;
    cin>>s;
    Solution obj;
    cout<<obj.isPalindrome(s);
    return 0;
}