// ======================================
// LeetCode Problem: subsets
// Language: cpp
// Link: https://leetcode.com/problems/subsets/
// Synced by: LinkCode
// Date: 9/1/2026, 9:10:11 PM
// ======================================


class Solution {
public:
    void allsubset(vector<int>& nums,int index,vector<int>& ans,vector<vector<int>>& result){
        if(index==nums.size()){
            result.push_back({ans});
            return;
        }
        ans.push_back(nums[index]);
        allsubset(nums,index+1,ans,result);
        ans.pop_back();
        allsubset(nums,index+1,ans,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>> result;
       vector<int> ans;
       allsubset(nums,0,ans,result);
       return result;
    }
};