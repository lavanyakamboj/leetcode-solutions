// ======================================
// LeetCode Problem: kth largest element in an array
// Language: cpp
// Link: https://leetcode.com/problems/kth-largest-element-in-an-array/
// Synced by: LinkCode
// Date: 8/28/2026, 5:47:37 PM
// ======================================


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());
        return nums[k-1];
    }
};