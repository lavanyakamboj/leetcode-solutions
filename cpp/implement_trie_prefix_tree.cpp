// ======================================
// LeetCode Problem: implement trie prefix tree
// Language: cpp
// Link: https://leetcode.com/problems/implement-trie-prefix-tree/
// Synced by: LinkCode
// Date: 8/29/2026, 8:49:01 PM
// ======================================


class Trie {
public:
        Trie* children[26];  //each node can have 26 children
        bool isTerminal;

    Trie() {
        for(int i=0; i<26; i++){
            children[i]= nullptr; //initialy do all childrens null
        }
        isTerminal=false;
    }
    
    void insert(string word) {
        Trie* curr = this;
        for(char ch : word){
            int index = ch - 'a';
            if(curr->children[index]==NULL){
                curr->children[index] = new Trie();
            }
            curr= curr->children[index];
        }
        curr->isTerminal = true;
    }
    
    bool search(string word) {
        Trie* curr = this;
        for(char ch : word){
            int index = ch - 'a';
            if(curr->children[index]==NULL){
                return false;
            }
            curr = curr->children[index];
        }
        return curr->isTerminal;
    }
    
    bool startsWith(string prefix) {
        Trie* curr = this;
        for (char ch : prefix) {
            int index = ch - 'a';
            if (curr->children[index] == nullptr) {
                return false;
            }
            curr = curr->children[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */