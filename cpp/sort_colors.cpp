// ======================================
// LeetCode Problem: sort colors
// Language: cpp
// Link: https://leetcode.com/problems/sort-colors/
// Synced by: LinkCode
// Date: 9/10/2026, 8:36:21 PM
// ======================================


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int left =0;
        int right = n-1;
        int mid = 0;

        while(mid<=right){
            if(nums[mid] == 0){
                swap(nums[left], nums[mid]);
                mid++;
                left++;
            }
            else if(nums[mid] == 2){
                swap(nums[right], nums[mid]);
                right--;               
            }
            else
                mid++;
        }
    }
};