// ======================================
// LeetCode Problem: combination sum
// Language: cpp
// Link: https://leetcode.com/problems/combination-sum/
// Synced by: LinkCode
// Date: 10/2/2026, 9:19:04 PM
// ======================================


class Solution {
public:
    void solve(vector<int>& candidates, int target, int index,
               vector<int>& ans, vector<vector<int>>& result) {

        // Target achieved
        if (target == 0) {
            result.push_back(ans);
            return;
        }

        // Out of bounds or target exceeded
        if (index == candidates.size() || target < 0) {
            return;
        }

        // Take the current number
        ans.push_back(candidates[index]);
        solve(candidates, target - candidates[index], index, ans, result);

        // Backtrack
        ans.pop_back();

        // Skip the current number
        solve(candidates, target, index + 1, ans, result);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> ans;

        solve(candidates, target, 0, ans, result);

        return result;
    }
};