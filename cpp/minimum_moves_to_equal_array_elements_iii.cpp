// ======================================
// LeetCode Problem: minimum moves to equal array elements iii
// Language: cpp
// Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
// Synced by: LinkCode
// Date: 11/3/2026, 7:44:17 PM
// ======================================


class Solution {
public:
    long long minMoves(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        long long res = 0;
        for (int x : nums) {
            res += (mx - x);
        }
        return res;
    }
};