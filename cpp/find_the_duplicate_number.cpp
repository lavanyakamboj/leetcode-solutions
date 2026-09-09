// ======================================
// LeetCode Problem: find the duplicate number
// Language: cpp
// Link: https://leetcode.com/problems/find-the-duplicate-number/
// Synced by: LinkCode
// Date: 9/9/2026, 10:23:13 PM
// ======================================


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    unordered_set<int> set;
    for(int n : nums){
        if(set.count(n)){
            return n ;
        }
        set.insert(n);
    }
    return 0;
    }
};