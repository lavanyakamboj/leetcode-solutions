// ======================================
// LeetCode Problem: maximum length substring with two occurrences
// Language: cpp
// Link: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
// Synced by: LinkCode
// Date: 8/14/2026, 8:46:51 PM
// ======================================


class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> map;
        int left =0;
        int ans =0;
        for(int right =0;right < s.size();right++){
            char ch = s[right];
            map[ch]++;
            while(map[ch]>2){
                map[s[left]]--;
                left++;
            }
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};