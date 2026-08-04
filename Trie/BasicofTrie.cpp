#include<iostream>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};
class Trie{
    public:
    TreiNode* root;
    Trie(){
        root = new TreiNode()
    }
    void insertUtil(TreiNode* root,string word){
       // base case
       if(word.length()==0){
           root->isTerminal = true;
       }
       // assumption word will be in CAPS
       int index = word[0]-'A';
       TrieNode* child;
       
       // present 
       if(root->child[index]!=NULL){
           child = root->children[index];
       }else{
        // absent
        child = new TrieNode(word[0]);
        root->children[index] = child;
       }
       // Recursion 
       insertUtil(child,word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root,word);
    }

    // search
    bool searchUtil(TrieNode* root,string word){
       // base case
       if(word.length()==0){
          return root->isTerminal;
       }
       int index = word[0]-'A';
       TrieNode* child;

       // present 
       if(root->children[index]!=NULL){
          child = root->children[index];
       }
       else{
        return false;
       }
       return searchUtil(root,word.substr(1));
    }
    void search(string word){
       return searchUtil(root,word);
    }
};
int main(){
    Trie t;
    t->insertWord("abcd");
    t->insertword()
    cout<<"Present or Not "<<t->searchWord("abcd")<<endl;

    return 0;
}