// ======================================
// LeetCode Problem: maximum alternating sum of squares
// Language: cpp
// Link: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
// Synced by: LinkCode
// Date: 10/13/2026, 9:43:02 PM
// ======================================


class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            nums[i] = 1LL * nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        int i = 0, j = n - 1;
        long long sum = 0, diff = 0;

        while (i < j) {
            sum += nums[j];
            diff += nums[i];
            i++;
            j--;
        }

        if (i == j) {
            sum += nums[i];
        }

        return sum - diff;
    }
};