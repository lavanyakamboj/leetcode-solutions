// ======================================
// LeetCode Problem: maximum alternating sum of squares
// Language: cpp
// Link: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
// Synced by: LinkCode
// Date: 10/13/2026, 9:38:03 PM
// ======================================



class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });

        int i = 0, j = nums.size() - 1;
        long long sum = 0, diff = 0;

        while (i < j) {
            sum += 1LL * nums[j] * nums[j];
            diff += 1LL * nums[i] * nums[i];
            i++;
            j--;
        }

        if (i == j) {
            sum += 1LL * nums[i] * nums[i];
        }

        return sum - diff;
    }
};
