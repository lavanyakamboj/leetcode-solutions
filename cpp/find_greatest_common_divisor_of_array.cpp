// ======================================
// LeetCode Problem: find greatest common divisor of array
// Language: cpp
// Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// Synced by: LinkCode
// Date: 7/18/2026, 5:03:22 PM
// ======================================


class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >largest){
                largest = nums[i];
            }
            if(nums[i]<smallest){
                smallest = nums[i];
            }
        }
        while(largest != 0){
            smallest = smallest % largest;
            swap(smallest,largest);
        }
        return smallest;
    }
};