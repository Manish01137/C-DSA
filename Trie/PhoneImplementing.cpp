#include<iostream>
using namespace std;

void printSuggestions(TrieNode* curr,vector<string> &temp,string prefix){
    if(curr->isTerminal){
        temp.push_back(prefix);
        return;
    }
    for(char ch = 'a';ch<='z';ch++){
         TrieNode* next = curr->children[ch-'a'];

         if(next!=NULL){
            prefix.push_back(ch);
            prefixSuggestions(next,temp,prefix);
            prefix.pop_back();
         }
    }
    
}
vector<vector<string> getSuggestions(string str){
    TrieNode* prev = root;
    vector<vector<string> > output;
    string prefix = "";

    for(int i=0;i<str.length();i++){
        char lastch = str[i];

        prefix.push_back(lastch);

        // check for lastch
        TrieNode* curr = prev->children[lastch-'a'];

        // if not found
        if(curr == NULL){
            break;
        }
        // if found
        vector<string> temp;
        printSuggestions(curr,temp,prefix);

        output.push_back(temp);
        temp.clear();
        prev = curr;
    }
    return output;
}
vector<vector<string>> phoneDirectory(vector<string>&contactList,string &queryStr){
    // creating of Trie
    Trie *t = new Trie();

    // insert all contact in trie
    for(int i=0;i<contactList.size();i++){
        string str = contactList[i];
        t->insertWord(str);
    }
    return getSuggestinos(queryStr);
}
int main(){

    return 0;
}