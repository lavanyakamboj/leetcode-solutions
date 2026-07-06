// ======================================
// LeetCode Problem: two sum
// Language: cpp
// Link: https://leetcode.com/problems/two-sum/
// Synced by: LinkCode
// Date: 7/6/2026, 9:46:18 PM
// ======================================


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> diff;
        for(int i=0;i<nums.size();i++){
            if(diff.count(target-nums[i])){
                return{diff[target-nums[i]],i};
            }
            diff[nums[i]]=i;
        }
        return {};
    }
};