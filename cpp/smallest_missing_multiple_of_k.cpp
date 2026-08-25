// ======================================
// LeetCode Problem: smallest missing multiple of k
// Language: cpp
// Link: https://leetcode.com/problems/smallest-missing-multiple-of-k/
// Synced by: LinkCode
// Date: 8/25/2026, 8:32:58 PM
// ======================================


class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> set;
        for(int n : nums){
            set.insert(n);
        }
        int ans=0;
        int c =1;
        while(true){
            if(!set.count(c * k )){
                ans =c*k;
                return ans;
            }
            c++;
        }
        
    }
};