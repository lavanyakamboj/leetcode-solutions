// ======================================
// LeetCode Problem: rotate array
// Language: cpp
// Link: https://leetcode.com/problems/rotate-array/
// Synced by: LinkCode
// Date: 9/10/2026, 8:49:00 PM
// ======================================


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k , nums.end());
    }
};