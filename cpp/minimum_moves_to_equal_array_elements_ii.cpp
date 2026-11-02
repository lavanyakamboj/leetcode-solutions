// ======================================
// LeetCode Problem: minimum moves to equal array elements ii
// Language: cpp
// Link: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
// Synced by: LinkCode
// Date: 11/2/2026, 8:14:06 PM
// ======================================


class Solution {
public:
    int minMoves2(vector<int>& nums) {
        auto mid = nums.begin() + nums.size() / 2;
        ranges::nth_element(nums, mid);
        int med = *mid, moves = 0;
        for (int x : nums) moves += abs(x - med);
        return moves;
    }
};