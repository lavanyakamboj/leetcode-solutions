// ======================================
// LeetCode Problem: remove outermost parentheses
// Language: cpp
// Link: https://leetcode.com/problems/remove-outermost-parentheses/
// Synced by: LinkCode
// Date: 10/8/2026, 9:26:26 PM
// ======================================


class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count = 0;

        for (char c : s) {
            if (c == '(') {
                if (count > 0)
                    ans += c;
                count++;
            } else {
                count--;
                if (count > 0)
                    ans += c;
            }
        }

        return ans;
    }
};