// ======================================
// LeetCode Problem: missing number
// Language: cpp
// Link: https://leetcode.com/problems/missing-number/
// Synced by: LinkCode
// Date: 9/9/2026, 9:41:30 PM
// ======================================


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        long long sum=0;
        long long numsum = 0;
        for(int i=0;i<=n;i++){
            sum = sum + i;
        }
        for(int i=0;i<n;i++){
            numsum = numsum + nums[i];
        }
        return sum - numsum;
    }
};