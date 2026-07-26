// ======================================
// LeetCode Problem: find minimum in rotated sorted array
// Language: cpp
// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Synced by: LinkCode
// Date: 7/26/2026, 9:37:22 PM
// ======================================


class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};