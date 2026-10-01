// ======================================
// LeetCode Problem: plus one
// Language: cpp
// Link: https://leetcode.com/problems/plus-one/
// Synced by: LinkCode
// Date: 10/1/2026, 10:16:00 PM
// ======================================


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);

        return digits;
    }
};