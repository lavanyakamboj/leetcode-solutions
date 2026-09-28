// ======================================
// LeetCode Problem: maximum nesting depth of the parentheses
// Language: cpp
// Link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
// Synced by: LinkCode
// Date: 9/28/2026, 8:30:01 PM
// ======================================


class Solution {
public:
    int maxDepth(string s) {
        int maxlen =0;
        int count =0;
        for(char ch : s){
            if(ch == '(')
                count++;
            
            if(ch == ')')
                count--;
            maxlen = max(maxlen , count);
        }
        return maxlen;
    }
};