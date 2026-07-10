// ======================================
// LeetCode Problem: ransom note
// Language: cpp
// Link: https://leetcode.com/problems/ransom-note/
// Synced by: LinkCode
// Date: 7/10/2026, 11:54:53 AM
// ======================================


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(char s : ransomNote){
            map1[s]++;
        }
        for(char s : magazine){
            map2[s]++;
        }
        for(auto i : map1){
            if(i.second > map2[i.first]){
                return false;
            }
        }
        return true;
    }
};