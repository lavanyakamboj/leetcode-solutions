// ======================================
// LeetCode Problem: maximum product of two elements in an array
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// Synced by: LinkCode
// Date: 7/27/2026, 8:03:20 PM
// ======================================


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f =0,s=0;
        for (int i=0 ; i<nums.size() ; i++){
            int digit = nums[i];
            if(digit > f){
                s=f;
                f = digit;
            }
            else if(digit > s){
                s= digit;
            }
        }
        int res = (f-1) * (s-1);
        return res;
    }
};