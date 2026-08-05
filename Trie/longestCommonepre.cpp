#include<iostream>
using namespace std;
class TrieNode{
    public:
    char data;
    int childCount;
    TrieNode* children[26];
    bool isTerminal;
    TreiNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};
class Trie{
    public:
    TrienNode* root;
    void insertUtil(TreiNode* root,string word){
       // base case
       if(word.length()==0){
           root->isTerminal = true;
       }
       // assumption word will be in CAPS
       int index = word[0]-'a';
       TrieNode* child;
       
       // present 
       if(root->child[index]!=NULL){
           child = root->children[index];
       }else{
        // absent
        child = new TrieNode(word[0]);
        childCount++;
        root->children[index] = child;
       }
       // Recursion 
       insertUtil(child,word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root,word);
    }

}
string longestCommonPrefix(vector<string> &arr,int n){
    string ans = "";
    // for traversing all the character of first string
    for(int i=0;i<arr[0].length();i++){
        char ch = arr[0][i];
        bool match = true;

        // for comparing ch with rest os the string
        for(int j=1;j<n;j++){
            // not match
            if(arr[j].size<i || ch!=arr[j][i]){
                match = false;
                break;
            }
        }
        if(match == false){
            break;
        }
        else{
            ans.push_back(ch);
        }
    }
}
int main(){

    return 0;
}