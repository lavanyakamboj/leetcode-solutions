// ======================================
// LeetCode Problem: number of unique xor triplets ii
// Language: cpp
// Link: https://leetcode.com/problems/number-of-unique-xor-triplets-ii/
// Synced by: LinkCode
// Date: 7/24/2026, 8:48:21 PM
// ======================================


class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> pairXor;
        unordered_set<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                pairXor.insert(nums[i] ^ nums[j]);
            }
        }
        for (int x : pairXor){
            for (int c : nums)
                ans.insert(x ^ c);
        }
        return ans.size();
    }
};