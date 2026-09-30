// ======================================
// LeetCode Problem: maximum nesting depth of two valid parentheses strings
// Language: cpp
// Link: https://leetcode.com/problems/maximum-nesting-depth-of-two-valid-parentheses-strings/
// Synced by: LinkCode
// Date: 9/30/2026, 10:12:51 PM
// ======================================


class Solution {
public:
    vector<int> maxDepthAfterSplit(auto s) {
        int n = s.size(); vector<int> res(n);
        
        for (int i = 0; i < n; i++)
            res[i] = (i ^ s[i]) & 1;

        return res;
    }
};