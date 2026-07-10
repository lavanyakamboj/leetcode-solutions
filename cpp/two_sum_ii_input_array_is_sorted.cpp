// ======================================
// LeetCode Problem: two sum ii input array is sorted
// Language: cpp
// Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
// Synced by: LinkCode
// Date: 7/10/2026, 6:13:11 PM
// ======================================


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            if( numbers[i] + numbers[j] == target){
                return{i+1,j+1};
            }
            else if(numbers[i] + numbers[j] > target){
                j--;
            }
            else
                i++;
        }
        return {};
    }
};