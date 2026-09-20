// ======================================
// LeetCode Problem: reverse degree of a string
// Language: cpp
// Link: https://leetcode.com/problems/reverse-degree-of-a-string/
// Synced by: LinkCode
// Date: 9/20/2026, 9:10:48 PM
// ======================================


class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            int reverseValue = 26 - (c - 'a');
            int position = i + 1;

            sum += reverseValue * position;
        }
        return sum;
    }
};