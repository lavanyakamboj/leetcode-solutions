// ======================================
// LeetCode Problem: longest subsequence with non zero bitwise xor
// Language: cpp
// Link: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
// Synced by: LinkCode
// Date: 8/15/2026, 10:17:52 PM
// ======================================


class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int nonzero = false;
        int res =0;
        for(int i =0; i < nums.size(); i++){
            res = res ^ nums[i];
            if(nums[i] != 0){
                nonzero = true;  // to know if there is any non zero element in array
            }
        }
    if(res != 0)
        return nums.size();
    if(nonzero)
        return nums.size()-1;

    return 0;
    }
};