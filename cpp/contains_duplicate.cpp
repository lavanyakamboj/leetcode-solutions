// ======================================
// LeetCode Problem: contains duplicate
// Language: cpp
// Link: https://leetcode.com/problems/contains-duplicate/
// Synced by: LinkCode
// Date: 7/8/2026, 5:19:40 PM
// ======================================


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> map;
        for(int i=0;i<nums.size();i++){
            if(map.count(nums[i])){
                return true;
            }
            map.insert(nums[i]);
        }
        return false;
    }
};