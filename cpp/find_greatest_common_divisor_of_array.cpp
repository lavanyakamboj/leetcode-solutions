// ======================================
// LeetCode Problem: find greatest common divisor of array
// Language: cpp
// Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// Synced by: LinkCode
// Date: 10/5/2026, 11:44:56 AM
// ======================================


class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int small = nums[0];
        int large = nums[nums.size()-1];
        while(large !=0){
            small = small % large;
            swap(small , large);
        }
        return small;
    }
};