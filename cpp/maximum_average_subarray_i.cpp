// ======================================
// LeetCode Problem: maximum average subarray i
// Language: cpp
// Link: https://leetcode.com/problems/maximum-average-subarray-i/
// Synced by: LinkCode
// Date: 7/17/2026, 5:51:33 PM
// ======================================


class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left =0;
        double avg = INT_MIN;
        int sum=0;
        for(int right =0;right<nums.size();right++){
            sum = sum + nums[right];
            if((right - left +1)== k ){
                double a = double(sum) /double(k);
                avg = max(a,avg);
                sum = sum - nums[left];
                left++;
            }
        }
        return avg;
    }
};