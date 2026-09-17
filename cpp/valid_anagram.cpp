// ======================================
// LeetCode Problem: valid anagram
// Language: cpp
// Link: https://leetcode.com/problems/valid-anagram/
// Synced by: LinkCode
// Date: 9/17/2026, 9:50:47 PM
// ======================================


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char,int> map;
        for(char ch : s){
            map[ch]++;
        }
        for(char ch : t){
            if(!map.count(ch)){
                return false;
            }
            map[ch]--;
        }
        for(auto it : map){
            if(it.second != 0)
                return false;
        }
        return true;
    }
};