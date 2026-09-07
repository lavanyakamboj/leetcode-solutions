// ======================================
// LeetCode Problem: two sum
// Language: cpp
// Link: https://leetcode.com/problems/two-sum/
// Synced by: LinkCode
// Date: 9/7/2026, 9:57:39 PM
// ======================================


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.count(target-nums[i])){
                return{map[target-nums[i]],i};
            }
            map[nums[i]]=i;
        }
        return{};
    }
};