// ======================================
// LeetCode Problem: majority element
// Language: cpp
// Link: https://leetcode.com/problems/majority-element/
// Synced by: LinkCode
// Date: 9/9/2026, 10:46:56 PM
// ======================================


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int n : nums){
            map[n]++;
        }
        int max=0;
        int ans = 0;
        for(auto i : map){
            if(i.second> max){
                max=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};