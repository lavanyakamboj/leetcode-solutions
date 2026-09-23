// ======================================
// LeetCode Problem: minimum operations to reduce x to zero
// Language: cpp
// Link: https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/
// Synced by: LinkCode
// Date: 9/23/2026, 9:08:47 PM
// ======================================


class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = accumulate(nums.begin(), nums.end(), 0);
        int target = total - x;

        if(target < 0) return -1;
        if(target == 0) return n;

        int left = 0;
        int sum = 0;
        int longest = -1;

        for(int right = 0; right < n; right++){
            sum += nums[right];
            while(left <= right && sum > target){
                sum -= nums[left++];
            }
            if(sum == target){
                longest = max(longest, right - left + 1);
            }
        }

        return longest == -1 ? -1 : n - longest;
    }
};