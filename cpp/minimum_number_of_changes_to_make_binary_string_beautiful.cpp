// ======================================
// LeetCode Problem: minimum number of changes to make binary string beautiful
// Language: cpp
// Link: https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/
// Synced by: LinkCode
// Date: 11/18/2026, 8:47:02 PM
// ======================================


class Solution {
public:
    int minChanges(string s) {
        int changes = 0;
        for (int i = 0; i < s.length(); i += 2) {
            if (s[i] != s[i + 1]) {
                changes++;
            }
        }
        return changes;
    }
};