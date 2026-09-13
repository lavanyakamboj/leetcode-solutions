// ======================================
// LeetCode Problem: move zeroes
// Language: cpp
// Link: https://leetcode.com/problems/move-zeroes/
// Synced by: LinkCode
// Date: 9/13/2026, 11:30:53 PM
// ======================================


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int left =0;
     for(int right = 0 ; right < nums.size();right++){
        while(nums[left] !=0 && left < right)
            left++;
        if(nums[right]!= 0){
            swap(nums[left], nums[right]);
        }
     }   
    }
};