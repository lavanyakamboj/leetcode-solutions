// ======================================
// LeetCode Problem: longest strictly increasing or strictly decreasing subarray
// Language: cpp
// Link: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
// Synced by: LinkCode
// Date: 11/12/2026, 10:07:17 PM
// ======================================


class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 1, inc = 1, dec = 1;
        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                inc++;
                dec = 1;
            } else if (nums[i] < nums[i - 1]) {
                dec++;
                inc = 1;
            } else {
                inc = 1;
                dec = 1;
            }
            maxLen = max(maxLen, max(inc, dec));
        }
        return maxLen;
    }
};