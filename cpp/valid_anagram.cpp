// ======================================
// LeetCode Problem: valid anagram
// Language: cpp
// Link: https://leetcode.com/problems/valid-anagram/
// Synced by: LinkCode
// Date: 7/8/2026, 8:58:59 PM
// ======================================


class Solution {
public:
    bool isAnagram(string s, string t) {
        int len = s.size();
        if(len != t.size()){
            return false;
        }
        unordered_map<char,int> map1;
        unordered_map<char,int> map2;
        for(int i=0;i<len;i++){
            if(map1.count(s[i]))
                map1[s[i]]=map1[s[i]]+1;
            else
                map1[s[i]]=1;

            if(map2.count(t[i]))
                map2[t[i]]=map2[t[i]]+1;
            else
                map2[t[i]]=1;
        }
        for(auto i : map1){
            if(map2[i.first] != map1[i.first]){
                return false;
            }
        }
        return true;
    }
};