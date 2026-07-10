// ======================================
// LeetCode Problem: maximum number of balloons
// Language: cpp
// Link: https://leetcode.com/problems/maximum-number-of-balloons/
// Synced by: LinkCode
// Date: 7/10/2026, 11:26:25 AM
// ======================================


class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> freq;
        for (char ch : text) {
            freq[ch]++;
        }
        int count = 0;
        while (
            freq['b'] >= 1 &&
            freq['a'] >= 1 &&
            freq['l'] >= 2 &&
            freq['o'] >= 2 &&
            freq['n'] >= 1
        ) {
            freq['b']--;
            freq['a']--;
            freq['l'] -= 2;
            freq['o'] -= 2;
            freq['n']--;

            count++;
        }

        return count;
    }
};