// ======================================
// LeetCode Problem: subarray sum equals k
// Language: cpp
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Synced by: LinkCode
// Date: 7/14/2026, 10:59:54 PM
// ======================================


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int prefix=0;
        int total=0;
        map[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix=prefix+nums[i];
            if(map.count(prefix-k)){
                total = total + map[prefix-k];
            }
            map[prefix]++;
        }
        return total;
    }
};