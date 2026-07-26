// ======================================
// LeetCode Problem: find minimum in rotated sorted array
// Language: cpp
// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Synced by: LinkCode
// Date: 7/26/2026, 9:58:31 PM
// ======================================


class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0 ;
        int right = n-1;

        while(left < right){
            int mid = left + (right - left)/2;
            if(nums[mid] > nums[right]){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
    }
};