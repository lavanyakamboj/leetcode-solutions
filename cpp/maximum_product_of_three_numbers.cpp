// ======================================
// LeetCode Problem: maximum product of three numbers
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-of-three-numbers/
// Synced by: LinkCode
// Date: 7/26/2026, 12:05:47 PM
// ======================================


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int p1 = nums[0] * nums[1] * nums[n-1];
        int p2 = nums[n-1] * nums[n-2] * nums[n-3];
        return max(p1,p2);
    }
};