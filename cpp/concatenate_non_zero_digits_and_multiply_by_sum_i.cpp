// ======================================
// LeetCode Problem: concatenate non zero digits and multiply by sum i
// Language: cpp
// Link: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
// Synced by: LinkCode
// Date: 7/7/2026, 10:26:32 PM
// ======================================


class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x = 0, s = 0;
        for (char c : to_string(n))
            if (c != '0')
                x = x * 10 + c - '0', s += c - '0';
        return x * s;
    }
};