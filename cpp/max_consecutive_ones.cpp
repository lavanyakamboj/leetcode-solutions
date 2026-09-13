// ======================================
// LeetCode Problem: max consecutive ones
// Language: cpp
// Link: https://leetcode.com/problems/max-consecutive-ones/
// Synced by: LinkCode
// Date: 9/13/2026, 11:23:04 PM
// ======================================


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left = 0;
        int maximum=0;
        for(int right = 0;right < nums.size();right ++){
            if(nums[right] != 1)
                left=right+1;
            
            else{
                maximum= max(maximum , right - left +1);
            }
        }
        return maximum;
    }
};