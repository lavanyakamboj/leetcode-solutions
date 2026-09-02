// ======================================
// LeetCode Problem: subsets ii
// Language: cpp
// Link: https://leetcode.com/problems/subsets-ii/
// Synced by: LinkCode
// Date: 9/2/2026, 8:29:52 PM
// ======================================


class Solution {
public:
    void subset(vector<int>& nums, int index , vector<int>& temp , set<vector<int>>& ans){
        if(index == nums.size()){
            ans.insert(temp);
            return;
        }
        temp.push_back(nums[index]);
        subset(nums,index+1,temp,ans);
        temp.pop_back();
        subset(nums,index+1,temp,ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ans;
        vector<int> temp;
        subset(nums,0,temp,ans);
        vector<vector<int>> result(ans.begin(), ans.end());
        return result;
    }
};