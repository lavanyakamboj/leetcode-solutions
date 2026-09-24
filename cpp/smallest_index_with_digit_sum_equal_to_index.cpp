// ======================================
// LeetCode Problem: smallest index with digit sum equal to index
// Language: cpp
// Link: https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/
// Synced by: LinkCode
// Date: 9/24/2026, 11:16:01 PM
// ======================================


// optimized version
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        const int n=min(28, int(nums.size()));
        for(int i=0; i<n; i++){
            int x=nums[i], digitSum=0;
            for(; x>0; x/=10){
                digitSum+=x%10;
            }
            if (digitSum==i) return i;
        }
        return -1;
    }
};