// ======================================
// LeetCode Problem: first unique character in a string
// Language: cpp
// Link: https://leetcode.com/problems/first-unique-character-in-a-string/
// Synced by: LinkCode
// Date: 7/10/2026, 10:57:11 AM
// ======================================


class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> map;
        for(char str : s){
            map[str]++;
        }
        for(int i=0;i<s.size();i++){
            char str = s[i];
                if(map[str]==1){
                    return i;
                }
        }
        return -1;
    }
};