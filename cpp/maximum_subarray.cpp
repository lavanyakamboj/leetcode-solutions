// ======================================
// LeetCode Problem: maximum subarray
// Language: cpp
// Link: https://leetcode.com/problems/maximum-subarray/
// Synced by: LinkCode
// Date: 9/10/2026, 8:06:22 PM
// ======================================


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum =INT_MIN;
        int curr = 0;
        int left =0;
        for(int right =0 ; right < nums.size() ; right++){
            curr = curr + nums[right];
            maxSum = max(maxSum,curr);
            if(curr < 0) {
                curr = 0;
            }

        }

        return maxSum;
    }
};