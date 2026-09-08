// ======================================
// LeetCode Problem: count commas in range
// Language: cpp
// Link: https://leetcode.com/problems/count-commas-in-range/
// Synced by: LinkCode
// Date: 9/8/2026, 9:39:55 PM
// ======================================


class Solution {
public:
    int countCommas(int n) {
        if(n < 1000)
            return 0;
        
        if(1000<n< 99999)
            return n-999;
        
        return 99001;
        
    }
};