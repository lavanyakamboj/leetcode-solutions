// ======================================
// LeetCode Problem: maximize sum of squares of digits
// Language: cpp
// Link: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
// Synced by: LinkCode
// Date: 10/14/2026, 10:26:33 PM
// ======================================



class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";

        for (int i = 0; i < num; i++) {
            int d = min(9, sum);
            ans += to_string(d);
            sum -= d;
        }

        if (sum > 0) return "";

        return ans;
    }
};
