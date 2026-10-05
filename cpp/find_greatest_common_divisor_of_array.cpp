// ======================================
// LeetCode Problem: find greatest common divisor of array
// Language: cpp
// Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// Synced by: LinkCode
// Date: 10/5/2026, 11:47:42 AM
// ======================================


class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int small = INT_MAX;
        int large = INT_MIN;

        for(int i=0; i <n ; i++){
            if(large < nums[i]){
                large = nums[i];
            }
            if(small > nums[i]){
                small = nums[i];
            }
        }

        while(large !=0){
            small = small % large;
            swap(small , large);
        }
        return small;
    }
};