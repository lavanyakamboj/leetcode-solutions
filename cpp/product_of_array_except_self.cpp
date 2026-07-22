// ======================================
// LeetCode Problem: product of array except self
// Language: cpp
// Link: https://leetcode.com/problems/product-of-array-except-self/
// Synced by: LinkCode
// Date: 7/22/2026, 9:27:29 PM
// ======================================


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int n = nums.size();
     int prefix = 1;
     vector<int> ans(n);
     for(int i =0;i<n;i++){
        ans[i]=prefix;
        prefix = prefix * nums[i];
     }   
     int suffix =1;
     for(int i = n-1 ; i>=0; i--){
        ans[i]= ans[i]* suffix;
        suffix = suffix * nums[i];
     }
     return ans; 
    }
};