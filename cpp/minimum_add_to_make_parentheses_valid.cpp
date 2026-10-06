// ======================================
// LeetCode Problem: minimum add to make parentheses valid
// Language: cpp
// Link: https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
// Synced by: LinkCode
// Date: 10/6/2026, 9:02:01 PM
// ======================================


class Solution {
public:
    int minAddToMakeValid(string s) {
        int opened = 0, added = 0;
        for (char ch : s) {
            if (ch == '(') opened++;
            else if (opened) opened--;  // close a pending "("
            else added++;  // ")" with nothing to close -> add a "("
        }
        return added + opened;  // still-open "(" need a ")" each
    }
};