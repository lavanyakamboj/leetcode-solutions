// ======================================
// LeetCode Problem: rank transform of an array
// Language: cpp
// Link: https://leetcode.com/problems/rank-transform-of-an-array/
// Synced by: LinkCode
// Date: 7/12/2026, 8:49:26 PM
// ======================================


class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted=arr;
        sort(sorted.begin(),sorted.end());
        unordered_map<int,int> map;
        int rank = 1;

        for (int num : sorted) {
            if (!map.count(num)) {
                map[num] = rank;
                rank++;
            }
        }
        vector<int> result;
        for(int i :arr){
            result.push_back(map[i]);
        }
        return result;
    }
};