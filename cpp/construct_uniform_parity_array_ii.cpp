// ======================================
// LeetCode Problem: construct uniform parity array ii
// Language: cpp
// Link: https://leetcode.com/problems/construct-uniform-parity-array-ii/
// Synced by: LinkCode
// Date: 9/3/2026, 9:35:12 PM
// ======================================


class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min = INT_MAX;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]<min)
                min = nums1[i];
        }

        if(min % 2 == 1)
            return true;

        for(int x : nums1) {
            if(x % 2 == 1)
                return false;
        }

        return true;
    }
};