// ======================================
// LeetCode Problem: find greatest common divisor of array
// Language: cpp
// Link: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
// Synced by: LinkCode
// Date: 7/18/2026, 5:01:07 PM
// ======================================


class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        int n1 = nums[0];
        int n2 = nums[n];
        while(n2 != 0){
            n1 = n1 % n2;
            swap(n1,n2);
        }
        return n1;
    }
};