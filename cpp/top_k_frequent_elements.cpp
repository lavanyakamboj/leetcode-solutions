// ======================================
// LeetCode Problem: top k frequent elements
// Language: cpp
// Link: https://leetcode.com/problems/top-k-frequent-elements/
// Synced by: LinkCode
// Date: 8/28/2026, 9:07:55 PM
// ======================================


//  --- unordered map ---

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
// return the elem stored in 2D array -- [i][0]-- frequency and [i][1]--elm
            res.push_back(freq[i][1]);
        }
        return res;
    }
};   

