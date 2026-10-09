// ======================================
// LeetCode Problem: minimum insertions to balance a parentheses string
// Language: cpp
// Link: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
// Synced by: LinkCode
// Date: 10/9/2026, 8:21:19 PM
// ======================================


class Solution {
public:
    int minInsertions(string s) {
        int open = 0, ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') open++;
            else {
                // Step 1: make a "))"
                if (i + 1 < s.size() && s[i + 1] == ')') i++;
                else ans++;

                // Step 2: find its '('
                if (open > 0) open--;
                else ans++;
            }
        }

        return ans + open * 2;
    }
};