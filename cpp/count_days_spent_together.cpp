// ======================================
// LeetCode Problem: count days spent together
// Language: cpp
// Link: https://leetcode.com/problems/count-days-spent-together/
// Synced by: LinkCode
// Date: 10/24/2026, 10:49:29 PM
// ======================================


class Solution {
public:
    int countDaysTogether(string a, string b, string c, string d) {
        return max(0, min(f(b), f(d)) - max(f(a), f(c)) + 1);
    }

    int f(auto& s) {
        int m = (s[0] - '0') * 10 + (s[1] - '0');
        int q = (s[3] - '0') * 10 + (s[4] - '0');

        return (275 * m) / 9 - 2 * ((m + 9) / 12) + q - 30;
    }
};