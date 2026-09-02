// ======================================
// LeetCode Problem: subsets ii
// Language: cpp
// Link: https://leetcode.com/problems/subsets-ii/
// Synced by: LinkCode
// Date: 9/2/2026, 9:24:46 PM
// ======================================


//  --- solution using sets ---

// class Solution {
// public:
//     void subset(vector<int>& nums, int index , vector<int>& temp , set<vector<int>>& ans){
//         if(index == nums.size()){
//             ans.insert(temp);
//             return;
//         }
//         temp.push_back(nums[index]);
//         subset(nums,index+1,temp,ans);
//         temp.pop_back();
//         subset(nums,index+1,temp,ans);
//     }

//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         set<vector<int>> ans;
//         vector<int> temp;
//         subset(nums,0,temp,ans);
//         vector<vector<int>> result(ans.begin(), ans.end());
//         return result;
//     }
// };


// --- best optimal approach ---

class Solution {
public:
    void subset(vector<int>& nums, int index , vector<int>& temp , vector<vector<int>>& ans){
        ans.push_back(temp);
        // skip the diplicates
        for(int i=index ; i<nums.size(); i++){
            if(i > index && nums[i] == nums[i-1])
                continue;

            temp.push_back(nums[i]);
            subset(nums,i+1,temp,ans);
            temp.pop_back();
        }
    }

// function calling the subset recursion function
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> temp;
        subset(nums,0,temp,result);
        return result;
    }
};
