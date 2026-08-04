// ======================================
// LeetCode Problem: find missing elements
// Language: cpp
// Link: https://leetcode.com/problems/find-missing-elements/
// Synced by: LinkCode
// Date: 8/4/2026, 11:40:06 AM
// ======================================


class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> result;
        int i= 1;
        int count = nums[0];
        while(i < nums.size()){
            count = count +1;
            if(nums[i] == count ){
                i=i+1;
            }
            else{
                while(nums[i] != count){
                    result.push_back(count);
                    count = count +1;
                }
            i=i+1;
            }
        }
        return result;
    }
};