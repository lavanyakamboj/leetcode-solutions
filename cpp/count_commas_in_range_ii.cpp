// ======================================
// LeetCode Problem: count commas in range ii
// Language: cpp
// Link: https://leetcode.com/problems/count-commas-in-range-ii/
// Synced by: LinkCode
// Date: 9/9/2026, 9:56:07 PM
// ======================================


class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        
        long long start = 1000;
        long long commas = 1;

        while (start <= n) {
            long long end = min(n, start * 1000 - 1);

            ans += (end - start + 1) * commas;

            start *= 1000;
            commas++;
        }
        return ans;
    }
};