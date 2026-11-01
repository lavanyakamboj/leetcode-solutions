// ======================================
// LeetCode Problem: minimum moves to equal array elements
// Language: cpp
// Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
// Synced by: LinkCode
// Date: 11/1/2026, 7:44:14 PM
// ======================================


class Solution {
public:
    int minMoves(vector<int>& nums) {
        return accumulate(nums.begin(), nums.end(), 0ll) - (nums.size() * ranges::min(nums));
    }
};