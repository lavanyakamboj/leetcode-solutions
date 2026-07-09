// ======================================
// LeetCode Problem: top k frequent elements
// Language: cpp
// Link: https://leetcode.com/problems/top-k-frequent-elements/
// Synced by: LinkCode
// Date: 7/9/2026, 9:27:10 PM
// ======================================


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> map;
        for(int i=0 ;i<nums.size();i++){
            map[nums[i]]++;
        }

        vector<vector<int>>freq ;
        for(auto i : map){
            freq.push_back({i.second,i.first});
        }
        sort(freq.rbegin(),freq.rend());

        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(freq[i][1]);
        }
        return res;
    }
};      