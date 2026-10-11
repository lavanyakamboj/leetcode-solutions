// ======================================
// LeetCode Problem: sum of squares of special elements
// Language: cpp
// Link: https://leetcode.com/problems/sum-of-squares-of-special-elements/
// Synced by: LinkCode
// Date: 10/11/2026, 10:45:18 PM
// ======================================


class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                ans += nums[i - 1] * nums[i - 1];
            }
        }
        return ans;
    }
};