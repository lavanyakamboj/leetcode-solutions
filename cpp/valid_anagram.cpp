// ======================================
// LeetCode Problem: valid anagram
// Language: cpp
// Link: https://leetcode.com/problems/valid-anagram/
// Synced by: LinkCode
// Date: 7/8/2026, 9:06:35 PM
// ======================================


class Solution {
public:
    bool isAnagram(string s, string t) {
        int len = s.size();
        if(len != t.size()){
            return false;
        }
        unordered_map<char,int> map1;
        for(int i=0;i<len;i++){
                map1[s[i]]++;
        }
        for(int i=0;i<len;i++){
                map1[t[i]]--;
        }
        for(auto i : map1){
            if(map1[i.first] != 0){
                return false;
            }
        }
        return true;
    }
};