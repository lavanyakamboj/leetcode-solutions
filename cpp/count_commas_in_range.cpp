// ======================================
// LeetCode Problem: count commas in range
// Language: cpp
// Link: https://leetcode.com/problems/count-commas-in-range/
// Synced by: LinkCode
// Date: 9/8/2026, 9:42:56 PM
// ======================================


class Solution {
public:
    int countCommas(int n) {
        if(n < 1000)
            return 0;
        
        return n-999;
        
    }
};