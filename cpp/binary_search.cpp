// ======================================
// LeetCode Problem: binary search
// Language: cpp
// Link: https://leetcode.com/problems/binary-search/
// Synced by: LinkCode
// Date: 7/26/2026, 9:02:28 PM
// ======================================


// Binary search approach 
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        while(left <= right){
            int mid = left + (right - left) /2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                right = mid-1;
            }
            else{
                left = mid +1;
            }
        }
        return -1;
    }
};