// ======================================
// LeetCode Problem: longest substring without repeating characters
// Language: cpp
// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/
// Synced by: LinkCode
// Date: 7/20/2026, 8:26:58 PM
// ======================================


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0, maxlen=0;
        unordered_map<char,int> map;
        for(int right=0; right<s.length(); right++){
            if(map.count(s[right])){
                left=max(map[s[right]]+1,left);
            }
            map[s[right]]= right;
            maxlen=max(maxlen, right-left+1);
        }
        return maxlen;
    }
};