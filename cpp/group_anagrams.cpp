// ======================================
// LeetCode Problem: group anagrams
// Language: cpp
// Link: https://leetcode.com/problems/group-anagrams/
// Synced by: LinkCode
// Date: 7/9/2026, 8:30:49 PM
// ======================================


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(string s: strs){                        
            string key = s;                         
            sort(key.begin() , key.end());            
            map[key].push_back(s);                   
        }
        vector<vector<string>> result;
        for(auto i : map){
            result.push_back(i.second);
        }
        return result;
    }
};