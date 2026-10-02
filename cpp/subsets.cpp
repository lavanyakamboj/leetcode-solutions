// ======================================
// LeetCode Problem: subsets
// Language: cpp
// Link: https://leetcode.com/problems/subsets/
// Synced by: LinkCode
// Date: 10/2/2026, 8:46:47 PM
// ======================================


class Solution {
public:
    void sub(vector<int>& nums ,int index, vector<int> ans,vector<vector<int>>& result ){
        if(index == nums.size()){
            result.push_back(ans);
            return;
        }
        ans.push_back(nums[index]);
        sub(nums, index+1,ans,result);
        ans.pop_back();
        sub(nums, index+1,ans,result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ans;
        sub(nums, 0,ans,result);
        return result;
    }
};