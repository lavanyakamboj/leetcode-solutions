// ======================================
// LeetCode Problem: find target indices after sorting array
// Language: cpp
// Link: https://leetcode.com/problems/find-target-indices-after-sorting-array/
// Synced by: LinkCode
// Date: 10/19/2026, 9:20:20 PM
// ======================================


class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        for(int i = 0 ; i<nums.size(); i++){
            // in sorted array if element greater then target break loop
            if(nums[i]>target){
                break;
            }
            if(nums[i] == target){
                res.push_back(i);
            }
        }
        return res;
    }
};