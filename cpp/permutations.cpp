// ======================================
// LeetCode Problem: permutations
// Language: cpp
// Link: https://leetcode.com/problems/permutations/
// Synced by: LinkCode
// Date: 9/3/2026, 9:53:01 PM
// ======================================


class Solution {
public:
    // backtracking function
    void backrtacking(vector<int>& nums, int index,vector<vector<int>>& ans){
        if(index == nums.size()){
               ans.push_back(nums);
            return;
        }
        for(int i=index;i<nums.size();i++){
            swap(nums[i],nums[index]);
            backrtacking(nums,index + 1,ans);
            swap(nums[i],nums[index]);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        backrtacking(nums,0,ans);
        return ans;
    }
};